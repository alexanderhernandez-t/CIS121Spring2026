#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    int dependents;
    double grossIncome, adjustedGross, taxRate, incomeTax;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter number of dependents: ";
    cin >> dependents;

    cout << "Enter gross income: ";
    cin >> grossIncome;

    adjustedGross = grossIncome - (dependents * 12000.0);

    if (adjustedGross > 50000.0)
        taxRate = 0.20;
    else
        taxRate = 0.10;

    incomeTax = adjustedGross * taxRate;

    if (incomeTax < 0)
        incomeTax = 100.0;

    cout << fixed << setprecision(2);
    cout << "\nLast Name: " << lastName << endl;
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Dependents: " << dependents << endl;
    cout << "Adjusted Gross Income: $" << adjustedGross << endl;
    cout << "Income Tax: $" << incomeTax << endl;

    return 0;
}
