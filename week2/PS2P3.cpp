#include <iostream>
#include <iomanip>
using namespace std;

	int main() {
	double length, width;

	cout << fixed << setprecision(2);

	cout << "Enter length:";
	cin >> length;

	cout << "Enter width:";
	cin >> width;

	double area = length * width;
	double circumference = (2 * length) + (2 * width);

	cout << "Area = " << area << endl;
	cout << "Circumference = " << circumference << endl;
	return 0;
}