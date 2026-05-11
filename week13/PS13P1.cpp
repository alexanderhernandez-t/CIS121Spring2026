#include <iostream>
#include <string>
using namespace std;

void displayArrays(string make[], string model[], int size)
{
    cout << "\nAuto List\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Auto " << i + 1 << ": " << make[i] << " " << model[i] << endl;
    }
}

int main()
{
    int size;

    cout << "How many autos do you want to enter? ";
    cin >> size;

    string* make = new string[size];
    string* model = new string[size];

    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter make for auto " << i + 1 << ": ";
        cin >> make[i];

        cout << "Enter model for auto " << i + 1 << ": ";
        cin >> model[i];
    }

    displayArrays(make, model, size);

    delete[] make;
    delete[] model;

    return 0;
}