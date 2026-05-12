#include <iostream>
#include <iomanip>
using namespace std;

void computeOrder(double quantity, double price, double& total, double& tax, double& totalOrder)
{
    total = quantity * price;
    tax = total * 0.07;
    totalOrder = total + tax;
}

int main()
{
    double quantity, price;
    double total, tax, totalOrder;
    double grandTotal = 0.0, grandTax = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter quantity and price. Press Ctrl+Z then Enter to stop.\n";

    while (cin >> quantity >> price)
    {
        computeOrder(quantity, price, total, tax, totalOrder);

        cout << "Total: $" << total << endl;
        cout << "Tax: $" << tax << endl;
        cout << "Total Order: $" << totalOrder << endl;
        cout << endl;

        grandTotal += total;
        grandTax += tax;
    }

    cout << "Sum of All Totals: $" << grandTotal << endl;
    cout << "Sum of All Taxes: $" << grandTax << endl;

    return 0;
}