#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


double getLabFee(string dept, int courseCode)
{
    if (dept == "CIS" && courseCode == 101)
        return 50.0;
    else if (dept == "CIS" && courseCode == 121)
        return 100.0;
    else if (dept == "MAT" && courseCode == 111)
        return 25.0;
    else if (dept == "MAT" && courseCode == 112)
        return 35.0;
    else if (dept == "ENG" && courseCode == 100)
        return 55.0;
    else
        return 50.0;
}


int main()
{
    string dept;
    int courseCode;
    double labFee;
    double totalLabFees = 0;
    int count = 0;


    cout << fixed << setprecision(2);
    cout << "Enter department and course code (Ctrl+Z to stop):" << endl;


    while (cin >> dept >> courseCode)
    {
        labFee = getLabFee(dept, courseCode);


        cout << "Department: " << dept << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Lab Fee: $" << labFee << endl;
        cout << endl;


        totalLabFees += labFee;
        count++;
    }


    cout << "Total Lab Fees: $" << totalLabFees << endl;


    if (count > 0)
        cout << "Average Lab Fee: $" << totalLabFees / count << endl;
    else
        cout << "Average Lab Fee: $0.00" << endl;


    return 0;
}
