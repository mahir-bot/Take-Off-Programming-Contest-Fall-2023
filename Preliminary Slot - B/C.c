#include<stdio.h>

int main() {
    int Overs;
    int Runs;
    scanf("%d%d", &Overs, &Runs);
    int total_balls = (Overs * 6);
    if (Runs >= total_balls) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
}