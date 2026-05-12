#include <iostream>
#include <string>
using namespace std;

double computeBattingAverage(int hits, int atBats)
{
    return static_cast<double>(hits) / atBats;
}

int main()
{
    string lastName;
    int hits, atBats;
    int count = 0;
    double average;

    cout << "Enter player's last name (Ctrl+Z to stop): ";
    while (cin >> lastName)
    {
        cout << "Enter number of hits: ";
        cin >> hits;
        cout << "Enter number of at bats: ";
        cin >> atBats;

        average = computeBattingAverage(hits, atBats);

        cout << "Last Name: " << lastName << endl;
        cout << "Batting Average: " << average << endl;

        count++;

        cout << "\nEnter player's last name (Ctrl+Z to stop): ";
    }

    cout << "\nNumber of players entered: " << count << endl;

    return 0;
}