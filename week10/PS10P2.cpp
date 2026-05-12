#include <iostream>
#include <iomanip>
using namespace std;

void computePostage(double weight, int zipCode, double& postage, double& areaCharge, double& weightCharge)
{
    double rate;

    if (weight > 100)
        rate = 0.02;
    else if (weight > 50)
        rate = 0.03;
    else
        rate = 0.05;

    weightCharge = weight * rate;

    if (zipCode == 60171)
        areaCharge = 2.00;
    else if (zipCode == 60172)
        areaCharge = 2.50;
    else if (zipCode == 60635)
        areaCharge = 3.00;
    else
        areaCharge = 5.00;

    postage = weightCharge + areaCharge;
}

int main()
{
    double weight;
    int zipCode;
    double postage, areaCharge, weightCharge;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << "Enter weight and zip code. Press Ctrl+Z then Enter to stop.\n";

    while (cin >> weight >> zipCode)
    {
        computePostage(weight, zipCode, postage, areaCharge, weightCharge);

        cout << "Area Charge: $" << areaCharge << endl;
        cout << "Weight Charge: $" << weightCharge << endl;
        cout << "Postage: $" << postage << endl;
        cout << endl;

        count++;
    }

    cout << "Number of Entries: " << count << endl;

    return 0;
}