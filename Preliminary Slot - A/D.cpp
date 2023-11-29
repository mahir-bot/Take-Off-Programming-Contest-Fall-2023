#include <bits/stdc++.h>
int main()
{
  int n;
  cin >> n;
  int ct = 0;
  for(int i = 0; i < 5; i++){
    int x;
    cin >> x;
    if(x > 0) ct++;
  }
  if(ct > 2) n++;
  if(n > 2) printf("Yes\n");
  else printf("No\n");
}
