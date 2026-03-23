#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    char job;
    double hours, rate, gross;

    cout << "Enter job code (L, J, A): ";
    cin >> job;
    job = toupper(job);

    cout << "Enter hours worked: ";
    cin >> hours;

    if (job == 'L' && hours > 40) rate = 50.00;
    else if (job == 'L' && hours <= 40) rate = 40.00;
    else if (job == 'J' && hours > 60) rate = 100.00;
    else if (job == 'J' && hours <= 60) rate = 75.00;
    else if (job == 'A' && hours > 40) rate = 25.00;
    else if (job == 'A' && hours <= 40) rate = 20.00;
    else {
        cout << "Invalid job code.\n";
        return 0;
    }

    gross = hours * rate;


    cout << fixed << setprecision(2);
    cout << "\nHours: " << hours << endl;
    cout << "Rate of Pay: $" << rate << endl;
    cout << "Gross Pay: $" << gross << endl;

    return 0;
}
