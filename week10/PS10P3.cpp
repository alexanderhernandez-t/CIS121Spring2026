#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void computeTuition(int creditHours, double financialAid, double& tuition, double& tuitionOwed)
{
    tuition = creditHours * 250.0;
    tuitionOwed = tuition - financialAid;
}

int main()
{
    string lastName;
    int creditHours;
    double financialAid;
    double tuition, tuitionOwed;
    double totalOwed = 0.0, averageOwed = 0.0;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << "Enter last name, credit hours, and financial aid. Press Ctrl+Z then Enter to stop.\n";

    while (cin >> lastName >> creditHours >> financialAid)
    {
        computeTuition(creditHours, financialAid, tuition, tuitionOwed);

        cout << "Last Name: " << lastName << endl;
        cout << "Tuition: $" << tuition << endl;
        cout << "Tuition Owed: $" << tuitionOwed << endl;
        cout << endl;

        totalOwed += tuitionOwed;
        count++;
    }

    if (count > 0)
        averageOwed = totalOwed / count;

    cout << "Total Tuition Owed by All Students: $" << totalOwed << endl;
    cout << "Number of Entries: " << count << endl;
    cout << "Average Amount Owed: $" << averageOwed << endl;

    return 0;
}