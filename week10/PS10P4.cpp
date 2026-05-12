#include <iostream>
#include <iomanip>
using namespace std;

void computeWidgets(int widgets, double& costPerWidget, double& extendedPrice, double& salesTax, double& totalOrder)
{
    if (widgets >= 10000)
        costPerWidget = 4.00;
    else if (widgets >= 5000)
        costPerWidget = 5.00;
    else
        costPerWidget = 10.00;

    extendedPrice = widgets * costPerWidget;
    salesTax = extendedPrice * 0.07;
    totalOrder = extendedPrice + salesTax;
}

int main()
{
    int widgets;
    double costPerWidget, extendedPrice, salesTax, totalOrder;
    double grandTotalOrders = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter number of widgets. Press Ctrl+Z then Enter to stop.\n";

    while (cin >> widgets)
    {
        computeWidgets(widgets, costPerWidget, extendedPrice, salesTax, totalOrder);

        cout << "Number of Widgets: " << widgets << endl;
        cout << "Cost Per Widget: $" << costPerWidget << endl;
        cout << "Extended Price: $" << extendedPrice << endl;
        cout << "Sales Tax: $" << salesTax << endl;
        cout << "Total Order: $" << totalOrder << endl;
        cout << endl;

        grandTotalOrders += totalOrder;
    }

    cout << "Sum of All Total Orders: $" << grandTotalOrders << endl;

    return 0;
}