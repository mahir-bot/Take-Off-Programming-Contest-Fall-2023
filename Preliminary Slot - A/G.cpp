#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;

ll power(ll a, ll b, ll mod) {
  ll res = 1;
  while (b) {
    if (b & 1) res = (res * a) % mod;
    b >>= 1;
    a = (a * a) % mod;
  }
  return res % mod;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, mod; cin >> n; ll A[n], B[n];
  for (ll &i : A) cin >> i;
  for (ll &i : B) cin >> i;
  cin >> mod;
  ll res = 1, ev = 0;
  map<ll, ll> mp;
  for (ll i = 0; i < n; i++) {
    res = ((res % mod) * (power(A[i] % mod, B[i] % (mod - 1), mod) % mod) % mod);
    mp[A[i]] += B[i];
  }
  double dig = 0;
  for (auto it : mp) {
    if ((it.second + 1) % 2 == 0) ev = 1;
    dig += (log10(it.second + 1.0));
  }
  cout << res << endl << (ev ? "Even" : "Odd") << endl << ((ll)(dig)) + 1 << endl;;

  return 0;
}
