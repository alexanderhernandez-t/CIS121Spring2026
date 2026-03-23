#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double fixedCosts, pricePerUnit, costPerUnit;

    cout << "Enter fixed costs: ";
    cin >> fixedCosts;

    cout << "Enter price per unit: ";
    cin >> pricePerUnit;

    cout << "Enter cost per unit: ";
    cin >> costPerUnit;

    double denominator = pricePerUnit - costPerUnit;

    if (denominator <= 0) {
        cout << "Break-even cannot be calculated because price per unit must be greater than cost per unit."
            << endl;
        return 0;
    }

    double breakEvenUnits = fixedCosts / denominator;

    cout << fixed << setprecision(2);
    cout << "Break-even point (units): " << breakEvenUnits << endl;

    return 0;
}
