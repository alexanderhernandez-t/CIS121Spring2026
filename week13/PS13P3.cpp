#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    char districtCode;
    int credits;
    double tuitionBalance;
};

double computeTuition(char districtCode, int credits)
{
    districtCode = toupper(districtCode);

    if (districtCode == 'I')
    {
        return credits * 250.00;
    }
    else
    {
        return credits * 500.00;
    }
}

void displayStudents(const vector<Student>& students)
{
    cout << fixed << setprecision(2);
    cout << "\nStudent Information\n";

    for (const Student& s : students)
    {
        cout << "\nFirst Name: " << s.firstName << endl;
        cout << "Last Name: " << s.lastName << endl;
        cout << "District Code: " << s.districtCode << endl;
        cout << "Credits: " << s.credits << endl;
        cout << "Tuition Balance: $" << s.tuitionBalance << endl;
    }

    cout << "\nNumber of students: " << students.size() << endl;
}

int main()
{
    vector<Student> students;
    Student temp;

    cout << "Enter first name, last name, district code, and credits.\n";
    cout << "Press Ctrl+Z then Enter to stop.\n\n";

    while (cin >> temp.firstName >> temp.lastName >> temp.districtCode >> temp.credits)
    {
        temp.tuitionBalance = computeTuition(temp.districtCode, temp.credits);
        students.push_back(temp);
    }

    displayStudents(students);

    return 0;
}