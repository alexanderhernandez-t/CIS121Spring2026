#include <iostream>
#include <string>
using namespace std;

double computeMPG(double miles, double gallons)
{
    return miles / gallons;
}

double computeGasCost(double gallons)
{
    return gallons * 3.50;
}

int main()
{
    string city;
    double miles, gallons, mpg, cost;
    double totalGasCost = 0;

    cout << "Enter destination city (Ctrl+Z to stop): ";
    while (cin >> city)
    {
        cout << "Enter miles traveled: ";
        cin >> miles;
        cout << "Enter gallons used: ";
        cin >> gallons;

        mpg = computeMPG(miles, gallons);
        cost = computeGasCost(gallons);

        cout << "Destination City: " << city << endl;
        cout << "Miles Per Gallon: " << mpg << endl;
        cout << "Cost of Gas: $" << cost << endl;

        totalGasCost += cost;

        cout << "\nEnter destination city (Ctrl+Z to stop): ";
    }

    cout << "\nTotal cost of gas: $" << totalGasCost << endl;

    return 0;
}
