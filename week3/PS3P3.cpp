#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double mealTotal;

    cout << "Enter meal total: ";
    cin >> mealTotal;

    double tip = mealTotal * 0.15;
    double totalWithTip = mealTotal + tip;

    cout << fixed << setprecision(2);
    cout << "Meal Total: $" << mealTotal << endl;
    cout << "Tip (15%): $" << tip << endl;
    cout << "Total with Tip: $" << totalWithTip << endl;

    return 0;
}
