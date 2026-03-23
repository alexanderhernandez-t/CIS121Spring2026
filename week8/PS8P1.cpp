#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


double calcMPG(double miles, double gallons)
{
    if (gallons == 0)
        return 0;
    return miles / gallons;
}


int main()
{
    string city;
    double miles, gallons, mpg;
    double totalMiles = 0;
    int tripCount = 0;


    cout << fixed << setprecision(2);
    cout << "Enter destination city, miles traveled, and gallons used (Ctrl+Z to stop):" << endl;


    while (cin >> city >> miles >> gallons)
    {
        mpg = calcMPG(miles, gallons);


        cout << "City: " << city << endl;
        cout << "MPG: " << mpg << endl;
        cout << endl;


        totalMiles += miles;
        tripCount++;
    }


    cout << "Total Miles Traveled: " << totalMiles << endl;
    cout << "Number of Trips: " << tripCount << endl;


    return 0;
}
