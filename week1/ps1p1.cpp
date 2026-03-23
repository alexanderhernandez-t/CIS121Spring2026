#include<iostream> // comment library
using namespace std; 
int main() {
	string firstName, lastName;
	
	cout << "Enter your first name: ";
	cin >> firstName;
	
	cout << "Enter your last name: ";
	cin >> lastName;

	cout << "Hello " << lastName << endl;

	return 0;
}