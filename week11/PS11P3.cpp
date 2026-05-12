#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

double computeMPG(double gallons, double miles)
{
    return miles / gallons;
}

int main()
{
    ifstream infile("trips.txt");

    if (!infile)
    {
        cout << "Error opening trips.txt" << endl;
        return 1;
    }

    double gallons, miles, mpg;
    double totalGallons = 0.0;
    double totalMiles = 0.0;

    cout << fixed << setprecision(2);
    cout << "Gallons\tMiles\tMPG" << endl;

    while (infile >> gallons >> miles)
    {
        mpg = computeMPG(gallons, miles);

        cout << gallons << "\t" << miles << "\t" << mpg << endl;

        totalGallons += gallons;
        totalMiles += miles;
    }

    cout << "\nSum of gallons: " << totalGallons << endl;
    cout << "Sum of miles: " << totalMiles << endl;

    infile.close();
    return 0;
}