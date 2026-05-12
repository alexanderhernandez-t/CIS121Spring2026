#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

void computeSavingsTax(double msrp, double salesPrice, double& savings, double& salesTax)
{
    savings = msrp - salesPrice;
    salesTax = salesPrice * 0.07;
}

int main()
{
    ifstream infile("auto.txt");

    if (!infile)
    {
        cout << "Error opening auto.txt" << endl;
        return 1;
    }

    string make, model;
    double msrp, salesPrice, savings, salesTax;
    double totalSavings = 0.0;

    cout << fixed << setprecision(2);
    cout << "Make\tModel\tMSRP\tSales Price\tSavings\tSales Tax" << endl;

    while (infile >> make >> model >> msrp >> salesPrice)
    {
        computeSavingsTax(msrp, salesPrice, savings, salesTax);

        cout << make << "\t" << model << "\t" << msrp << "\t"
            << salesPrice << "\t\t" << savings << "\t" << salesTax << endl;

        totalSavings += savings;
    }

    cout << "\nSum of savings: " << totalSavings << endl;

    infile.close();
    return 0;
}