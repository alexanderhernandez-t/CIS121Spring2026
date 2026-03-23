#include <iostream>
#include <string>
using namespace std;

int main() {
    string lastName;
    int score;
    char grade;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter score: ";
    cin >> score;

    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';

    cout << "\nLast Name: " << lastName << endl;
    cout << "Letter Grade: " << grade << endl;

    return 0;
}
