#include <iostream>
using namespace std;

double computeTotal(int quantity, double price)
{
    return quantity * price;
}

double computeDiscount(double total)
{
    if (total > 10000)
        return total * 0.10;
    else
        return total * 0.05;
}

int main()
{
    int quantity;
    double price, total, discount, finalTotal;
    double sumTotal = 0, sumDiscount = 0;

    cout << "Enter quantity (Ctrl+Z to stop): ";
    while (cin >> quantity)
    {
        cout << "Enter price: ";
        cin >> price;

        total = computeTotal(quantity, price);
        discount = computeDiscount(total);
        finalTotal = total - discount;


        cout << "Total: $" << total << endl;
        cout << "Discount: $" << discount << endl;
        cout << "Final Total: $" << finalTotal << endl;

        sumTotal += total;
        sumDiscount += discount;

        cout << "\nEnter quantity (Ctrl+Z to stop): ";
    }

    cout << "\nSum of totals: $" << sumTotal << endl;
    cout << "Sum of discounts: $" << sumDiscount << endl;

    return 0;
}
