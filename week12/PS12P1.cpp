#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 10;

void loadData(string first[], string last[], double gpa[], int size);
void displayData(string first[], string last[], double gpa[], int size);
void displayReverse(string first[], string last[], double gpa[], int size);

int main()
{
    string first[SIZE], last[SIZE];
    double gpa[SIZE];

    loadData(first, last, gpa, SIZE);

    cout << "Students in normal order:\n";
    displayData(first, last, gpa, SIZE);

    cout << "\nStudents in reverse order:\n";
    displayReverse(first, last, gpa, SIZE);

    return 0;
}

void loadData(string first[], string last[], double gpa[], int size)
{
    ifstream infile("StudentData.txt");

    if (!infile)
    {
        cout << "Error opening StudentData.txt\n";
        exit(1);
    }

    for (int i = 0; i < size; i++)
    {
        infile >> first[i] >> last[i] >> gpa[i];
    }

    infile.close();
}

void displayData(string first[], string last[], double gpa[], int size)
{
    cout << fixed << setprecision(2);

    for (int i = 0; i < size; i++)
    {
        cout << first[i] << " " << last[i] << " " << gpa[i] << endl;
    }
}

void displayReverse(string first[], string last[], double gpa[], int size)
{
    cout << fixed << setprecision(2);

    for (int i = size - 1; i >= 0; i--)
    {
        cout << first[i] << " " << last[i] << " " << gpa[i] << endl;
    }
}