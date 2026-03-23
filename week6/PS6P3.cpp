#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    int tickets;
    char loc;
    double price, total;

    cout << "Enter number of tickets: ";
    cin >> tickets;

    cout << "Enter location code (H or L): ";
    cin >> loc;
    loc = toupper(loc);

    if (tickets > 25 || loc == 'H') price = 30.00;
    else if (tickets > 10 || loc == 'L') price = 40.00;
    else price = 50.00;

    total = tickets * price;

    cout << fixed << setprecision(2);
    cout << "\nTickets: " << tickets << endl;
    cout << "Price Per Ticket: $" << price << endl;
    cout << "Total Cost: $" << total << endl;

    return 0;
}
