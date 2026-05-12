#include <iostream>
#include <string>
using namespace std;

double getCostPerCredit(char districtCode)
{
    if (districtCode == 'I' || districtCode == 'i')
        return 250;
    else if (districtCode == 'O' || districtCode == 'o')
        return 550;
    else
        return 0;
}

double computeTuitionCost(int creditHours, double costPerCredit)
{
    return creditHours * costPerCredit;
}

int main()
{
    string lastName;
    char districtCode;
    int creditHours;
    double costPerCredit, tuitionCost;
    double totalTuition = 0;

    cout << "Enter student last name (Ctrl+Z to stop): ";
    while (cin >> lastName)
    {
        cout << "Enter credit hours: ";
        cin >> creditHours;
        cout << "Enter district code (I or O): ";
        cin >> districtCode;

        costPerCredit = getCostPerCredit(districtCode);
        tuitionCost = computeTuitionCost(creditHours, costPerCredit);

        cout << "Student Name: " << lastName << endl;
        cout << "Tuition Cost: $" << tuitionCost << endl;

        totalTuition += tuitionCost;

        cout << "\nEnter student last name (Ctrl+Z to stop): ";
    }

    cout << "\nTotal of all tuition costs: $" << totalTuition << endl;

    return 0;
}
