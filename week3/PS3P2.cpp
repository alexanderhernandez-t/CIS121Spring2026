#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price;
    int quantity;

    cout << "Enter current stock price: ";
    cin >> price;

    cout << "Enter quantity of stock: ";
    cin >> quantity;

    double value = price * quantity;

    cout << fixed << setprecision(2);
    cout << "Current value of stock: $" << value << endl;

    return 0;
}
