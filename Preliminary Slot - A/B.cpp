#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef double ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll area, base; cin >> area >> base;
  cout << fixed << setprecision(4) << (area * 2.0) / base << endl;
  return 0;
}
