#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    int creditHours;
    char districtCode;
    double rate, tuition;
    double totalTuition = 0.0;
    int totalCreditHours = 0;
    int studentCount = 0;
    cout << fixed << setprecision(2);
    cout << "Enter last name, credit hours, and district code (Ctrl+Z to stop):" << endl;

    while (cin >> lastName >> creditHours >> districtCode) {
        if (districtCode == 'I' || districtCode == 'i')
            rate = 250.0;
        else if (districtCode == 'O' || districtCode == 'o')
            rate = 550.0;
        else
            rate = 0.0;

        tuition = creditHours * rate;

        totalTuition += tuition;
        totalCreditHours += creditHours;
        studentCount++;

        cout << "Student Name: " << lastName << endl;
        cout << "Tuition Owed: $" << tuition << endl;
        cout << endl;
    }

    cout << "Total Tuition Owed: $" << totalTuition << endl;
    cout << "Total Credit Hours: " << totalCreditHours << endl;
    cout << "Number of Students: " << studentCount << endl;

    return 0;
}
