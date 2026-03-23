#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    char equip, day;
    double cost;

    cout << "Enter equipment code (A, B, C): ";
    cin >> equip;
    equip = toupper(equip);

    cout << "Enter day code (F for full, H for half): ";
    cin >> day;
    day = toupper(day);

    if (equip == 'A' && day == 'F') cost = 10.00;
    else if (equip == 'A' && day == 'H') cost = 15.00;
    else if (equip == 'B' && day == 'F') cost = 20.00;
    else if (equip == 'B' && day == 'H') cost = 35.00;
    else if (equip == 'C' && day == 'H') cost = 40.00;
    else if (equip == 'C' && day == 'F') cost = 45.00;
    else cost = 50.00;

    cout << fixed << setprecision(2);
    cout << "\nRental Cost: $" << cost << endl;

    return 0;
}
