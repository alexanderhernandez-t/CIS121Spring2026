#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    int qty;
    char status;
    double price, extended, tax, total;

    cout << "Enter quantity of widgets: ";
    cin >> qty;

    cout << "Enter customer status (A, B, C, D): ";
    cin >> status;
    status = toupper(status);

    // Price table
    if (qty > 10000 && status == 'A') price = 10.00;
    else if (qty > 10000 && status == 'B') price = 12.00;
    else if (qty >= 5000 && qty <= 10000 && status == 'C') price = 20.00;
    else if (qty >= 5000 && qty <= 10000 && status == 'D') price = 22.00;
    else if (qty < 5000) price = 30.00;
    else price = 30.00; // default if status doesn't match

    extended = qty * price;
    tax = extended * 0.07;
    total = extended + tax;

    cout << fixed << setprecision(2);
    cout << "\nExtended Price: $" << extended << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
