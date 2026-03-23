#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string lastName;
    double hours, rate, total;
    char jobCode;

    cout << "Enter employee last name: ";
    cin >> lastName;

    cout << "Enter hours worked: ";
    cin >> hours;

    cout << "Enter job code (E, J, A): ";
    cin >> jobCode;
    jobCode = toupper(jobCode);

    if (jobCode == 'E') rate = 25.00;
    else if (jobCode == 'J') rate = 20.00;
    else if (jobCode == 'A') rate = 15.00;
    else {
        cout << "Invalid job code.\n";
        return 0;
    }

    total = hours * rate;

    cout << fixed << setprecision(2);
    cout << "\nLast Name: " << lastName << endl;
    cout << "Hours Worked: " << hours << endl;
    cout << "Pay Rate: $" << rate << endl;
    cout << "Total Pay: $" << total << endl;

    return 0;
}
