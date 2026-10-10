#include <iostream>
using namespace std;
int main() 
{
    int marks;
    cout << "ENTER MARKS: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "YOUR GRADE IS A";
    }
    else if (marks >= 80) {
        cout << "YOUR GRADE IS B";
    }
    else if (marks >= 70) {
        cout << "YOUR GRADE IS C";
    }
    else if (marks >= 60) {
        cout << "YOUR GRADE IS D";
    }
    else {
        cout << "YOUR GRADE IS F";
    }

    return 0;
}