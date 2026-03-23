#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int part, qty;
    double cpu, total;

    cout << "Enter part number (10, 99, 55, 70, 50): ";
    cin >> part;

    cout << "Enter quantity: ";
    cin >> qty;

    if (part == 10 && qty > 1000) cpu = 1.00;
    else if (part == 99 && qty > 500) cpu = 2.00;
    else cpu = 5.00;

    total = qty * cpu;

    cout << fixed << setprecision(2);
    cout << "\nPart Number: " << part << endl;
    cout << "Cost Per Unit: $" << cpu << endl;
    cout << "Total Cost: $" << total << endl;

    return 0;
}
