#include <stdio.h>
int main( ) {
  double area, base, height;
  scanf("%lf %lf", &area, &base);
  height = (2.0 * area) / base;
  printf("%.3lf\n", height);
  return 0;
}
