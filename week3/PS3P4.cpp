#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double purchasePrice, currentPrice;

    cout << "Enter purchase price: ";
    cin >> purchasePrice;

    cout << "Enter current price: ";
    cin >> currentPrice;

    if (purchasePrice == 0) {
        cout << "Purchase price cannot be 0." << endl;
        return 0;
    }

    double change = currentPrice - purchasePrice;
    double percent = (change / purchasePrice) * 100.0;

    cout << fixed << setprecision(2);

    if (percent > 0) {
        cout << "The stock increased by " << percent << "%." << endl;
    }
    else if (percent < 0) {
        cout << "The stock decreased by " << (percent * -1) << "%." << endl;
    }
    else {
        cout << "The stock did not change (0.00%)." << endl;
    }

    return 0;
}

