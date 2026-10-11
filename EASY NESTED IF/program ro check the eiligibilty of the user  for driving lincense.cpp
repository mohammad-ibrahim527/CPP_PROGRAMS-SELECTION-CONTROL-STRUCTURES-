#include <iostream>
using namespace std;
int main() 
{
    int age;
    char test ;
    cout << "ENTER AGE: ";
    cin >> age;
    cout << "ENTER TEST RESULT ( PASSED : P, FAILED : F): ";
    cin >> test;
    if (age >= 18) {
        if (test == 'P') {
            cout << "THE PERSON IS ELIGIBLE FOR A DRIVING LICENSE.";
        }
        else {
            cout << "THE PERSON MUST PASS THE TEST FIRST.";
        }
    }
    else {
        cout << "THE PERSON IS TOO YOUNG TO DRIVE.";
    }

    return 0;
}