#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string city;
    double miles, gallons, mpg;
    double totalMiles = 0.0;
    int tripCount = 0;

    cout << fixed << setprecision(2);
    cout << "Enter destination city, miles traveled, and gallons used (Ctrl+Z to stop):" << endl;

    while (cin >> city >> miles >> gallons) {
        if (gallons != 0)
            mpg = miles / gallons;
        else
            mpg = 0.0;

        totalMiles += miles;
        tripCount++;

        cout << "Destination City: " << city << endl;
        cout << "Miles Per Gallon: " << mpg << endl;
        cout << endl;
    }

    cout << "Total Miles Traveled: " << totalMiles << endl;
    cout << "Number of Trips: " << tripCount << endl;

    return 0;
}
