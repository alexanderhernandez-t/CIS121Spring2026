#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary, taxRate, taxOwed;

    cout << "Enter annual salary: ";
    cin >> salary;

    if (salary > 100000) taxRate = 0.40;
    else if (salary >= 50000) taxRate = 0.35;
    else taxRate = 0.25;

    taxOwed = salary * taxRate;

    cout << fixed << setprecision(2);
    cout << "\nSalary: $" << salary << endl;
    cout << "Tax Rate: " << (taxRate * 100) << "%" << endl;
    cout << "Tax Owed: $" << taxOwed << endl;

    return 0;
}
