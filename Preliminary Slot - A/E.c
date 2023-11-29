#include <stdio.h>
int main()
{
  int n, x, y;
  scanf("%d%d%d", &n, &x, &y);
  int a = n, b = n;
  while(x--){
    int v;
    scanf("%d", &v);
    if(v%2!=0) a += 2;
    else a += 1;
  }
  while(y--){
    int v;
    scanf("%d", &v);
    if(v%2!=0) b += 2;
    else b += 1;
  }
  if(a == b) printf("DRAW\n");
  else if(a < b) printf("A\n");
  else printf("B\n");
}
