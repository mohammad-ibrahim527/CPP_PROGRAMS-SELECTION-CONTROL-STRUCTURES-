#include <iostream>
using namespace std;

int main() {
    int pin, balance, amount, dailyLimit;
    int correctPin = 9119 ;
    cout << "ENTER PIN: ";
    cin >> pin;
    cout << "ENTER ACCOUNT BALANCE: ";
    cin >> balance;
    cout << "ENTER WITHDRAWAL AMOUNT: ";
    cin >> amount;
    cout << "ENTER DAILY LIMIT: ";
    cin >> dailyLimit;
    if (pin == correctPin) {
        if (amount > 0) {
            if (amount <= balance) {
                if (amount <= dailyLimit) {
                    if (amount % 100 == 0) {
                        cout << "WITHDRAWAL SUCCESSFUL\n";
                        cout << "REMAINING BALANCE: " << balance - amount;
                    }
                    else {
                        cout << "AMOUNT MUST BE IN MULTIPLES OF 100";
                    }
                }
                else {
                    cout << "DAILY LIMIT EXCEEDED";
                }
            }
            else {
                cout << "INSUFFICIENT BALANCE";
            }
        }
        else {
            cout << "INVALID AMOUNT";
        }
    }
    else {
        cout << "WRONG PIN";
    }

    return 0;
}