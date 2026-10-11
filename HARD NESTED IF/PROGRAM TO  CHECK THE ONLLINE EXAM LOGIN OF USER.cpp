#include <iostream>
using namespace std;

int main() {
    int roll, password; char exam;
    int correctRoll = 498, correctPassword = 11223344;
    cout << "ENTER ROLL NUMBER: ";
    cin >> roll;
    cout << "ENTER PASSWORD: ";
    cin >> password;
    cout << "ENTER EXAM STATUS (OPEN:O , CLOSED:C ): ";
    cin >> exam;
    if (roll == correctRoll) {
        if (password == correctPassword) {
            if (exam == 'O') {
                cout << "LOGIN SUCCESSFUL, YOU CAN START YOUR EXAM";
            }
            else {
                cout << "LOGIN SUCCESSFUL, BUT THE EXAM IS CLOSED";
            }
        }
        else {
            cout << "WRONG PASSWORD";
        }
    }
    else {
        cout << "ROLL NUMBER NOT FOUND";
    }

    return 0;
}