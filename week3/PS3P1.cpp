#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double exam1, exam2;
    cout << "Enter Exam 1 score: ";
    cin >> exam1;
    cout << "Enter Exam 2 score: ";
    cin >> exam2;


    double total = (exam1 * 0.60) + (exam2 * 0.40);
    cout << fixed << setprecision(2);
    cout << "Weighted Total Score: " << total << endl;


    return 0;
}
