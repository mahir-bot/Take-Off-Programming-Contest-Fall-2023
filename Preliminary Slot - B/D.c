#include <stdio.h>

int main() {
    int age, weight;
    scanf("%d %d", &age, &weight);
    int ticket_price = 0;
    if (age < 3 || age >= 70) {
        ticket_price = 0;
    }
    else if (age >= 3 && age <= 12) {
        ticket_price = 10;
    }
    else if (age >= 65 && age <= 69) {
        ticket_price = 15;
    }
    else if (age >= 30 && age <= 40 && weight > 75) {
        ticket_price = 18;
    }
    else {
        ticket_price = 20;
    }
    if (ticket_price == 0) {
        printf("Free\n");
    }
    else {
        printf("%d\n", ticket_price);
    }
    return 0;
}