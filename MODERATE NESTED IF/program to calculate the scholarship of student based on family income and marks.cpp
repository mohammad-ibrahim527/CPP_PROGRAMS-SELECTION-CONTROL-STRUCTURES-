#include <iostream>
using namespace std;
int main() 
{
    int marks, family_Income;
    cout << "ENTER MARKS PERCENTAGE: ";
    cin >> marks;
    cout << "ENTER FAMILY ANNUAL INCOME: ";
    cin >> family_Income;
    if (marks >= 80) {
        if (family_Income <= 100000) {
            cout << "ELIGIBLE FOR A FULL SCHOLARSHIP";
        }
        else if (family_Income <= 200000) {
            cout << "ELIGIBLE FOR A HALF SCHOLARSHIP";
        }
        else {
            cout << "NOT ELIGIBLE: FAMILY INCOME TOO HIGH";
        }
    }
    else {
        cout << "NOT ELIGIBLE: MARKS TOO LOW";
    }

    return 0;
}