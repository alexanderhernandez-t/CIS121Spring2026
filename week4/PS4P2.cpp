#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    char item;
    int quantity;
    double unitPrice = 0.0, extended;

    cout << "Enter item (A or B): ";
    cin >> item;
    item = toupper(item);

    cout << "Enter quantity: ";
    cin >> quantity;

    if (item == 'A')
        unitPrice = 10.00;
    else if (item == 'B')
        unitPrice = 20.00;
    else {
        cout << "Invalid item. Must be A or B.\n";
        return 0;
    }

    extended = quantity * unitPrice;

    cout << fixed << setprecision(2);
    cout << "\nItem: " << item << endl;
    cout << "Unit Price: $" << unitPrice << endl;
    cout << "Extended Price: $" << extended << endl;

    return 0;
}
