#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 8;

void loadData(string city[], int pop[], int size);
void displayData(string city[], int pop[], int size);
int sequentialSearch(string city[], int size, string target);

int main()
{
    string city[SIZE];
    int pop[SIZE];
    string target;
    int index;

    loadData(city, pop, SIZE);

    cout << "City data:\n";
    displayData(city, pop, SIZE);

    cout << "\nEnter city name, ctl+z to stop: ";
    while (cin >> target)
    {
        index = sequentialSearch(city, SIZE, target);

        if (index != -1)
            cout << city[index] << " has a population of " << pop[index] << endl;
        else
            cout << target << " not found" << endl;

        cout << "\nEnter city name, ctl+z to stop: ";
    }

    cout << "\nGoodbye. Have a nice day.\n";

    return 0;
}

void loadData(string city[], int pop[], int size)
{
    ifstream infile("CityData.txt");

    if (!infile)
    {
        cout << "Error opening CityData.txt\n";
        exit(1);
    }

    for (int i = 0; i < size; i++)
    {
        infile >> city[i] >> pop[i];
    }

    infile.close();
}

void displayData(string city[], int pop[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << city[i] << " " << pop[i] << endl;
    }
}

int sequentialSearch(string city[], int size, string target)
{
    for (int i = 0; i < size; i++)
    {
        if (city[i] == target)
            return i;
    }

    return -1;
}