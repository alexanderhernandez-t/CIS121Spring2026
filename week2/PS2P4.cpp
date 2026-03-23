#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string lastName;
	int credits;
	
	cout << fixed << setprecision(2);

	cout << "Enter last name:";
	cin >> lastName;

	cout << "Enter credits taken:";
	cin >> credits;

	const double COST_PER_CREDIT = 250.00;
	const double LAB_FEE = 100.00;

	double tuition = (credits * COST_PER_CREDIT) + LAB_FEE;

	cout << "Last name: " << lastName << endl;
	cout << "Total tuition: $" << tuition << endl;
	return 0;
}