#include <iostream>
using namespace std;
int main() 
{
    int age, creditScore, income;
    cout << "ENTER AGE: ";
    cin >> age;
    cout << "ENTER MONTHLY INCOME: ";
    cin >> income;
    cout << "ENTER CREDIT SCORE: ";
    cin >> creditScore;
    if (age >= 21 && age <= 60) {
        if (income >= 50000) {
            if (creditScore >= 500) {
                cout << "LOAN APPROVED";
            }
            else {
                cout << "REJECTED: LOW CREDIT SCORE";
            }
        }
        else {
            cout << "REJECTED: INSUFFICIENT INCOME";
        }
    }
    else {
        cout << "REJECTED: AGE NOT IN RANGE";
    }

    return 0;
}