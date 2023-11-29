#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll n; cin >> n; string f = "DP";
  if (n % 3 == 1) f = "Binary Search";
  if (n % 3 == 2) f = "Graph Theory";
  cout << f << endl;
  return 0;
}
