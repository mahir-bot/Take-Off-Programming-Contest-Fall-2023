#include <bits/stdc++.h>
using namespace std;

int main() {
    int age, weight;
    cin >> age >> weight;
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
        cout << "Free\n";
    }
    else {
        cout << ticket_price << "\n";
    }
    return 0;
}