#include <iostream>
using namespace std;

int main() {
	int n1, n2, n3;
	int result;

	cout << "Enter first integer (n1): ";
	cin >> n1;

	cout << "Enter second integer (n2):";
	cin >> n2;

	cout <<"Enter third integer (n3):";
	cin >> n3;

	result  = (n1 + n2) * n3;

	cout << "Result = " << result << endl;

	return 0;
}