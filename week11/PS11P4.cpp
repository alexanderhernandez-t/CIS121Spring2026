#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

double computeBiWeeklyPay(double annualSalary)
{
    return annualSalary / 26.0;
}

int main()
{
    ifstream infile("empl.txt");

    if (!infile)
    {
        cout << "Error opening empl.txt" << endl;
        return 1;
    }

    string lastName;
    double annualSalary, biWeeklyPay;
    double totalAnnualSalary = 0.0;
    int count = 0;
    double averageAnnualSalary = 0.0;

    cout << fixed << setprecision(2);
    cout << "Last Name\tAnnual Salary\tBi-Weekly Salary" << endl;

    while (infile >> lastName >> annualSalary)
    {
        biWeeklyPay = computeBiWeeklyPay(annualSalary);

        cout << lastName << "\t\t" << annualSalary << "\t" << biWeeklyPay << endl;

        totalAnnualSalary += annualSalary;
        count++;
    }

    if (count > 0)
    {
        averageAnnualSalary = totalAnnualSalary / count;
    }

    cout << "\nSum of annual salary: " << totalAnnualSalary << endl;
    cout << "Count of employees: " << count << endl;
    cout << "Average annual salary: " << averageAnnualSalary << endl;

    infile.close();
    return 0;
}
