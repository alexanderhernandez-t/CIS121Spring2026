#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
	string lastName;
	double hours, rate;

	cout << fixed << setprecision(2);

	cout << "Enter last name:";
	cin >> lastName;

	cout << "Enter hours worked:";
	cin >> hours;

	cout <<"Enter pay rate:";
	cin >> rate;

	double grossPay = hours * rate;

	cout << "Last name" << endl;
	cout << "Gross pay: $" << grossPay << endl;
	return 0;
}
