#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void computeInvestment(double amount, double fiveYearRate, double tenYearRate, double& fiveYearAmount, double& tenYearAmount)
{
    fiveYearAmount = amount * pow(1 + fiveYearRate, 5);
    tenYearAmount = amount * pow(1 + tenYearRate, 10);
}

int main()
{
    double amount, fiveYearRate, tenYearRate;
    double fiveYearAmount, tenYearAmount;

    cout << fixed << setprecision(2);
    cout << "Enter investment amount, 5 year rate, and 10 year rate. Press Ctrl+Z then Enter to stop.\n";

    while (cin >> amount >> fiveYearRate >> tenYearRate)
    {
        computeInvestment(amount, fiveYearRate, tenYearRate, fiveYearAmount, tenYearAmount);

        cout << "Investment Amount: $" << amount << endl;
        cout << "Five Year Amount: $" << fiveYearAmount << endl;
        cout << "Ten Year Amount: $" << tenYearAmount << endl;
        cout << endl;
    }

    return 0;
}