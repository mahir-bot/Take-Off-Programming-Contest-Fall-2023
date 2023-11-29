#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, x, y, cur1 = 0, cur2 = 0; cin >> n >> x >> y;
  bool A[n + 5] = {}, B[n + 5] = {}; string f = "DRAW";
  for (ll i = 0, t; i < x && cin >> t; i++) A[t] = true;
  for (ll i = 0, t; i < y && cin >> t; i++) B[t] = true;
  for (ll i = 1; i < n; ) {
    cur1 += 1;
    if (A[i]) {
      A[i] = false; i -= 1;
      if (i % 2 == 0) {
        cur1 += 1;
        i -= 1;
      }
    }
    else i++;
  }
  for (ll i = 1; i < n; ) {
    cur2 += 1;
    if (B[i]) {
      B[i] = false; i -= 1;
      if (i % 2 == 0) {
        cur2 += 1;
        i -= 1;
      }
    }
    else i++;
  }
  if (cur1 < cur2) f = "A";
  else if (cur1 > cur2)f = "B";
  cout << f << endl;
  return 0;
}
