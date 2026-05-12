#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 10;

void loadData(string first[], string last[], double salary[], int size);
void displayData(string first[], string last[], double salary[], int size);
int sequentialSearch(string last[], int size, string target);

int main()
{
    string first[SIZE], last[SIZE], targetLast;
    double salary[SIZE];
    int index;

    loadData(first, last, salary, SIZE);

    cout << "Employee data:\n";
    displayData(first, last, salary, SIZE);

    cout << "\nEnter last name, ctl+z to stop: ";
    while (cin >> targetLast)
    {
        index = sequentialSearch(last, SIZE, targetLast);

        if (index != -1)
        {
            cout << fixed << setprecision(2);
            cout << first[index] << " " << last[index] << " " << salary[index] << endl;
        }
        else
        {
            cout << targetLast << " not found" << endl;
        }

        cout << "\nEnter last name, ctl+z to stop: ";
    }

    cout << "\nGoodbye. Have a nice day.\n";

    return 0;
}

void loadData(string first[], string last[], double salary[], int size)
{
    ifstream infile("Empldata.txt");

    if (!infile)
    {
        cout << "Error opening Empldata.txt\n";
        exit(1);
    }

    for (int i = 0; i < size; i++)
    {
        infile >> first[i] >> last[i] >> salary[i];
    }

    infile.close();
}

void displayData(string first[], string last[], double salary[], int size)
{
    cout << fixed << setprecision(2);

    for (int i = 0; i < size; i++)
    {
        cout << first[i] << " " << last[i] << " " << salary[i] << endl;
    }
}

int sequentialSearch(string last[], int size, string target)
{
    for (int i = 0; i < size; i++)
    {
        if (last[i] == target)
            return i;
    }

    return -1;
}