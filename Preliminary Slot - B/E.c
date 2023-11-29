#include<stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", arr[k]);
    int current = arr[k];
    for (int i = k + 1; i <= n; i++) {
        if (arr[i] >= current) {
            printf(" %d", arr[i]);
            current = arr[i];
        }
    }
    printf("\n");
    printf("%d", arr[k]);
    current = arr[k];
    for (int i = k; i >= 1; i--) {
        if (arr[i] <= current) {
            printf(" %d", arr[i]);
            current = arr[i];
        }
    }
    printf("\n");
    return 0;
}


