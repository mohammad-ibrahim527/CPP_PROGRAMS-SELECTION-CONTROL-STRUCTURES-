#include <iostream>
using namespace std;
int main() 
{
    int marks;
    cout << "ENTER MARKS : ";
    cin >> marks;
    if (marks < 0 || marks > 100) {
        cout << "INVALID MARKS";
    }
    else if (marks >= 95) {
        cout << "YOUR SCHOLARSHIP IS 100 PERCENT";
    }
    else if (marks >= 90) {
        cout << "YOUR SCHOLARSHIP IS 75 PERCENT";
    }
    else if (marks >= 80) {
        cout << "YOUR SCHOLARSHIP IS 50 PERCENT";
    }
    else if (marks >= 70) {
        cout << "YOUR SCHOLARSHIP IS 25 PERCENT";
    }
    else {
        cout << "NO SCHOLARSHIP";
    }

    return 0;
}