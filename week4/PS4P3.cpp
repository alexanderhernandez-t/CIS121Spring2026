#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int books;
    double costPerBook, orderTotal, shipping;

    cout << "Enter number of books: ";
    cin >> books;

    cout << "Enter cost per book: ";
    cin >> costPerBook;

    orderTotal = books * costPerBook;

    if (orderTotal > 50.00)
        shipping = 0.00;
    else
        shipping = 25.00;

    cout << fixed << setprecision(2);
    cout << "\nOrder Total: $" << orderTotal << endl;
    cout << "Shipping Charge: $" << shipping << endl;

    return 0;
}
