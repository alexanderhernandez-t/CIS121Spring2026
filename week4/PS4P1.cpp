#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int quantity;
    double unitPrice, extended, tax, total;

    cout << "Enter quantity: ";
    cin >> quantity;

    if (quantity >= 1000)
        unitPrice = 3.00;
    else
        unitPrice = 5.00;

    extended = quantity * unitPrice;
    tax = extended * 0.07;
    total = extended + tax;

    cout << fixed << setprecision(2);
    cout << "\nQuantity: " << quantity << endl;
    cout << "Unit Price: $" << unitPrice << endl;
    cout << "Extended Price: $" << extended << endl;
    cout << "Tax (7%): $" << tax << endl;
    cout << "Total: $" << total << endl;


    return 0;
    }
