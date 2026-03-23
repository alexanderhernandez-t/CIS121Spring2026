#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


double calcPay(char jobCode, double hours)
{
    double rate = 0;


    if (jobCode == 'L' || jobCode == 'l')
        rate = 25.0;
    else if (jobCode == 'A' || jobCode == 'a')
        rate = 30.0;
    else if (jobCode == 'J' || jobCode == 'j')
        rate = 50.0;


    if (hours > 40)
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        return hours * rate;
}


int main()
{
    string lname;
    char jobCode;
    double hours, pay;
    double totalPay = 0;
    int count = 0;


    cout << fixed << setprecision(2);
    cout << "Enter last name, job code, and hours worked (Ctrl+Z to stop):" << endl;


    while (cin >> lname >> jobCode >> hours)
    {
        pay = calcPay(jobCode, hours);


        cout << "Last Name: " << lname << endl;
        cout << "Pay: $" << pay << endl;
        cout << endl;


        totalPay += pay;
        count++;
    }


    if (count > 0)
        cout << "Average Pay: $" << totalPay / count << endl;
    else
        cout << "Average Pay: $0.00" << endl;


    cout << "Number of Entries: " << count << endl;


    return 0;
}
