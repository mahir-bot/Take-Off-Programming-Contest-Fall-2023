#include<stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int result = ((x * y) + z - 1) / z;
    printf("%d\n", result);
    return 0;
}