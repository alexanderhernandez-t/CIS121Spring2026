#include <iostream>
#include <string>
using namespace std;

double getPayRate(char jobCode)
{
    if (jobCode == 'L' || jobCode == 'l')
        return 25;
    else if (jobCode == 'A' || jobCode == 'a')
        return 30;
    else if (jobCode == 'J' || jobCode == 'j')
        return 50;
    else
        return 0;
}

double computeGrossPay(double hours, double rate)
{
    if (hours <= 40)
        return hours * rate;
    else
        return (40 * rate) + ((hours - 40) * rate * 1.5);
}

int main()
{
    string lastName;
    char jobCode;
    double hours, rate, grossPay;
    double totalGrossPay = 0;

    cout << "Enter employee last name (Ctrl+Z to stop): ";
    while (cin >> lastName)
    {
        cout << "Enter job code: ";
        cin >> jobCode;
        cout << "Enter hours worked: ";
        cin >> hours;

        rate = getPayRate(jobCode);
        grossPay = computeGrossPay(hours, rate);

        cout << "Last Name: " << lastName << endl;
        cout << "Gross Pay: $" << grossPay << endl;

        totalGrossPay += grossPay;

        cout << "\nEnter employee last name (Ctrl+Z to stop): ";
    }

    cout << "\nTotal of all gross pay: $" << totalGrossPay << endl;

    return 0;
}
