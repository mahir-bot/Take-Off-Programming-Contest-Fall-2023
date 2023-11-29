#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int current = arr[k];
    for (int i = k; i <= n; i++) {
        if (arr[i] >= current) {
            cout << arr[i] << " ";
            current = arr[i];
        }
    }
    cout << "\n";
    current = arr[k];
    for (int i = k; i >= 1; i--) {
        if (arr[i] <= current) {
            cout << arr[i] << " ";
            current = arr[i];
        }
    }
    cout << "\n";
    return 0;
}