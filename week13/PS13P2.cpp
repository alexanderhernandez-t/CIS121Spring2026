#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Employee
{
    string firstName;
    string lastName;
    double hours;
    double rate;
    double grossPay;
};

double computeGrossPay(double hours, double rate)
{
    if (hours > 40)
    {
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    }
    else
    {
        return hours * rate;
    }
}

int main()
{
    int n;

    cout << "How many employees do you want to enter? ";
    cin >> n;

    vector<Employee> employees(n);

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter first name for employee " << i + 1 << ": ";
        cin >> employees[i].firstName;

        cout << "Enter last name for employee " << i + 1 << ": ";
        cin >> employees[i].lastName;

        cout << "Enter hours worked: ";
        cin >> employees[i].hours;

        cout << "Enter hourly rate: ";
        cin >> employees[i].rate;

        employees[i].grossPay = computeGrossPay(employees[i].hours, employees[i].rate);
    }

    cout << fixed << setprecision(2);
    cout << "\nEmployee Payroll Information\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "First Name: " << employees[i].firstName << endl;
        cout << "Last Name: " << employees[i].lastName << endl;
        cout << "Hours: " << employees[i].hours << endl;
        cout << "Rate: $" << employees[i].rate << endl;
        cout << "Gross Pay: $" << employees[i].grossPay << endl;
    }

    return 0;
}