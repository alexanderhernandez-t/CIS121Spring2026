#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    char jobCode;
    double hoursWorked, rate, pay, overtimeHours, regularPay, overtimePay;
    double totalPay = 0.0;
    int countEmployees = 0;

    cout << fixed << setprecision(2);
    cout << "Enter last name, job code, and hours worked (Ctrl+Z to stop):" << endl;

    while (cin >> lastName >> jobCode >> hoursWorked) {
        if (jobCode == 'L' || jobCode == 'l')
            rate = 25.0;
        else if (jobCode == 'A' || jobCode == 'a')
            rate = 30.0;
        else if (jobCode == 'J' || jobCode == 'j')
            rate = 50.0;
        else
            rate = 0.0;

        if (hoursWorked > 40) {
            overtimeHours = hoursWorked - 40;
            regularPay = 40 * rate;
            overtimePay = overtimeHours * rate * 1.5;
            pay = regularPay + overtimePay;
        }
        else {
            pay = hoursWorked * rate;
        }

        totalPay += pay;
        countEmployees++;

        cout << "Last Name: " << lastName << endl;
        cout << "Job Code: " << jobCode << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Pay: $" << pay << endl;
        cout << endl;
    }

    if (countEmployees > 0)
        cout << "Average Pay: $" << totalPay / countEmployees << endl;
    else
        cout << "Average Pay: $0.00" << endl;

    cout << "Number of Entries: " << countEmployees << endl;

    return 0;
}