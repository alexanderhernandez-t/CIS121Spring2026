#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

double computeExtendedPrice(int quantity, double price)
{
    return quantity * price;
}

int main()
{
    ifstream infile("grocery.txt");

    if (!infile)
    {
        cout << "Error opening grocery.txt" << endl;
        return 1;
    }

    string item;
    int quantity;
    double price, extendedPrice;
    double sumExtendedPrice = 0.0;
    double tax, totalReceipt;

    cout << fixed << setprecision(2);
    cout << "Item\t\tQuantity\tCost Per Item\tExtended Price" << endl;

    while (infile >> item >> quantity >> price)
    {
        extendedPrice = computeExtendedPrice(quantity, price);

        cout << item << "\t\t" << quantity << "\t\t" << price
            << "\t\t" << extendedPrice << endl;

        sumExtendedPrice += extendedPrice;
    }

    tax = sumExtendedPrice * 0.07;
    totalReceipt = sumExtendedPrice + tax;

    cout << "\nSum of extended price: " << sumExtendedPrice << endl;
    cout << "Tax: " << tax << endl;
    cout << "Total receipt: " << totalReceipt << endl;

    infile.close();
    return 0;
}