#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e6 + 6;
vector<ll> primes;
bool isprime[N];

void all_prime() {
    primes.push_back(2);
    for (ll i = 3; i <= N; i += 2) {
        if (!isprime[i]) {
            primes.push_back(i);
            for (ll j = i * i; j <= N; j += i) isprime[j] = true;
        }
    }
}
vector<pair<ll, int>> prime_factors(ll m) {
    vector<pair<ll, int>> pf;
    for (ll prime : primes) {
        if (prime * prime > m) break;
        int cnt = 0;
        while (m % prime == 0) {
            m /= prime;
            cnt++;
        }
        if (cnt) pf.push_back({prime, cnt});
    }
    if (m > 1) pf.push_back({m, 1});
    return pf;
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
    cin >> tc;
    for (int cs = 1; cs <= tc; cs++) {
        ll n, r, m;
        cin >> n >> r >> m;
        vector<pair<ll, int>> pf = prime_factors(m);
        ll mx_x = 1e18;
        for (auto &factor : pf) {
            ll res = mx_power(n, factor.first);
            res -= mx_power(r, factor.first);
            res -= mx_power(n - r, factor.first);
            res /= factor.second;
            mx_x = min(res, mx_x);
        }
        cout << "Case " << cs << ": " << mx_x << "\n";
    }
    return 0;
}
