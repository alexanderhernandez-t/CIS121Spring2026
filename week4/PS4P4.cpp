#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    double cost, warranty, total;

    cout << "Enter appliance name: ";
    getline(cin, name);

    cout << "Enter appliance cost: ";
    cin >> cost;

    if (cost > 1000.00)
        warranty = cost * 0.10;
    else
        warranty = cost * 0.05;

    total = cost + warranty;

    cout << fixed << setprecision(2);
    cout << "\nAppliance: " << name << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Warranty Cost: $" << warranty << endl;
    cout << "Total (Cost + Warranty): $" << total << endl;

    return 0;
}
