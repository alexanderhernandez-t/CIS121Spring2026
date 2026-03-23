#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


double calcTuition(int credits)
{
    return credits * 250.0;
}


int main()
{
    string lname;
    int credits;
    double tuition;
    double totalTuition = 0;
    int count = 0;


    cout << fixed << setprecision(2);
    cout << "Enter student last name and credits taken (Ctrl+Z to stop):" << endl;


    while (cin >> lname >> credits)
    {
        tuition = calcTuition(credits);


        cout << "Last Name: " << lname << endl;
        cout << "Credits: " << credits << endl;
        cout << "Tuition Owed: $" << tuition << endl;
        cout << endl;


        totalTuition += tuition;
        count++;
    }


    cout << "Total Tuition: $" << totalTuition << endl;
    cout << "Number of Students: " << count << endl;


    return 0;
}
