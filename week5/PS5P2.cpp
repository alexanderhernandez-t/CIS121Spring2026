#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double lbs, pricePerPound, total;

    cout << "Enter quantity in pounds: ";
    cin >> lbs;

    if (lbs > 100) pricePerPound = 0.10;
    else if (lbs >= 50) pricePerPound = 0.25;
    else pricePerPound = 0.50;

    total = lbs * pricePerPound;

    cout << fixed << setprecision(2);
    cout << "\nPrice Per Pound: $" << pricePerPound << endl;
    cout << "Total: $" << total << endl;

}

