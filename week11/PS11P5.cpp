#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

void computeTuitionFees(char studentCode, double creditsTaken, double& costPerCredit,
    double& tuitionOwed, double& courseFees)
{
    if (studentCode == 'I')
    {
        costPerCredit = 250.0;
    }
    else
    {
        costPerCredit = 500.0;
    }

    tuitionOwed = creditsTaken * costPerCredit;
    courseFees = tuitionOwed * 0.10;
}

int main()
{
    ifstream infile("student.txt");

    if (!infile)
    {
        cout << "Error opening student.txt" << endl;
        return 1;
    }

    string lastName;
    char studentCode;
    double creditsTaken, costPerCredit, tuitionOwed, courseFees;
    double totalTuition = 0.0;
    double averageTuition = 0.0;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << "Last Name\tCode\tCost/Credit\tCredits\tTuition Owed\tCourse Fees" << endl;

    while (infile >> lastName >> studentCode >> creditsTaken)
    {
        computeTuitionFees(studentCode, creditsTaken, costPerCredit, tuitionOwed, courseFees);

        cout << lastName << "\t\t" << studentCode << "\t" << costPerCredit << "\t\t"
            << creditsTaken << "\t" << tuitionOwed << "\t\t" << courseFees << endl;

        totalTuition += tuitionOwed;
        count++;
    }

    if (count > 0)
    {
        averageTuition = totalTuition / count;
    }

    cout << "\nSum of tuition owed: " << totalTuition << endl;
    cout << "Number of students: " << count << endl;
    cout << "Average tuition per student: " << averageTuition << endl;

    infile.close();
    return 0;
}