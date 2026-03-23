#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    int hits, atBats;
    double battingAverage;
    int countPlayers = 0;

    cout << fixed << setprecision(3);
    cout << "Enter last name, hits, and at bats (Ctrl+Z to stop):" << endl;

    while (cin >> lastName >> hits >> atBats) {
        if (atBats != 0)
            battingAverage = (double)hits / atBats;
        else
            battingAverage = 0.0;

        countPlayers++;

        cout << "Last Name: " << lastName << endl;
        cout << "Batting Average: " << battingAverage << endl;
        cout << endl;
    }

    cout << "Number of players entered: " << countPlayers << endl;

    return 0;
}
