#include <stdio.h>
#include <stdbool.h>
typedef long long ll;

struct Pair {
    ll prime;
    int count;
};
#define N (int) 1e6 + 1
int prime_sz = 0, pf_sz;
ll primes[N];
bool isprime[N];

void all_prime() {
    primes[prime_sz++] = 2;
    for (ll i = 3; i < N; i += 2) {
        if (!isprime[i]) {
            primes[prime_sz++] = i;
            for (ll j = i * i; j < N; j += i) isprime[j] = true;
        }
    }
}
void prime_factors(struct Pair pf[], ll m) {
    pf_sz = 0;
    for (int i = 0; primes[i] * primes[i] <= m && i < prime_sz; i++) {
        int cnt = 0;
        while (m % primes[i] == 0) {
            m /= primes[i];
            cnt++;
        }
        if (cnt) {
            pf[pf_sz].prime = primes[i];
            pf[pf_sz].count = cnt;
            pf_sz++;
        }
    }
    if (m > 1) {
        pf[pf_sz].prime = m;
        pf[pf_sz].count = 1;
        pf_sz++;
    }
}
ll mx_power(ll n, ll p) {
    ll cnt = 0;
    while (n) {
        n /= p;
        cnt += n;
    }
    return cnt;
}
int main() {
    all_prime();
    int tc;
    scanf("%d", &tc);
    for (int cs = 1; cs <= tc; cs++) {
        ll n, r, m;
        scanf("%lld %lld %lld", &n, &r, &m);
        struct Pair pf[20];
        prime_factors(pf, m);
        ll mx_x = 1e18;
        for (int i = 0; i < pf_sz; i++) {
            ll res = mx_power(n, pf[i].prime);
            res -= mx_power(r, pf[i].prime);
            res -= mx_power(n - r, pf[i].prime);
            res /= pf[i].count;
            mx_x = res < mx_x ? res : mx_x;
        }
        printf("Case %d: %lld\n", cs, mx_x);
    }
    return 0;
}