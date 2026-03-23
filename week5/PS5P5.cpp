#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, rate, totalPaid;

    cout << "Enter weight in pounds: ";
    cin >> weight;

    if (weight > 100) rate = 0.50;
    else if (weight >= 30) rate = 0.25;
    else if (weight >= 20) rate = 0.20;
    else rate = 0.00;

    totalPaid = weight * rate;

    cout << fixed << setprecision(2);
    cout << "\nWeight: " << weight << " lbs" << endl;
    cout << "Rate Per Pound: $" << rate << endl;
    cout << "Total Paid: $" << totalPaid << endl;

    return 0;
}