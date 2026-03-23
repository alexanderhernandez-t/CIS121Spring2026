#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int quantity;
	double unitPrice;

	cout << fixed << setprecision(2);

	cout << "Enter quantity:";
	cin >> quantity;

	cout << "Enter unit price:";
	cin >> unitPrice;

	double extendedPrice = quantity * unitPrice;

	cout << "Extended price = $" << extendedPrice << endl;
	return 0;
}