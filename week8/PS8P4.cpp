#include <iostream>
#include <iomanip>
using namespace std;


double getUnitPrice(char code)
{
    if (code == 'W' || code == 'w')
        return 10.0;
    else if (code == 'C' || code == 'c')
        return 15.0;
    else if (code == 'G' || code == 'g')
        return 20.0;
    else
        return 0.0;
}


double getShipping(char code)
{
    if (code == 'W' || code == 'w')
        return 2.0;
    else if (code == 'C' || code == 'c')
        return 5.0;
    else if (code == 'G' || code == 'g')
        return 7.0;
    else
        return 0.0;
}


int main()
{
    char code;
    int qty;
    double unitPrice, shipping, extendedPrice, total;
    double grandTotal = 0;


    cout << fixed << setprecision(2);
    cout << "Enter product code and quantity (Ctrl+Z to stop):" << endl;


    while (cin >> code >> qty)
    {
        unitPrice = getUnitPrice(code);
        shipping = getShipping(code);
        extendedPrice = qty * unitPrice;
        total = extendedPrice + shipping;


        cout << "Product Code: " << code << endl;
        cout << "Unit Price: $" << unitPrice << endl;
        cout << "Shipping: $" << shipping << endl;
        cout << "Extended Price: $" << extendedPrice << endl;
        cout << "Total: $" << total << endl;
        cout << endl;


        grandTotal += total;
    }


    cout << "Total of All Entries: $" << grandTotal << endl;


    return 0;
}
