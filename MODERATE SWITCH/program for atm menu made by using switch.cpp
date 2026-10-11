#include <iostream>
using namespace std;
int main() 
{
    int choice,amount,pin;
    int balance = 10000;
	int correct_pin = 9119 ;
	cout << "ENTER YOUR PIN : " ;
	cin  >> pin ;
    cout << "1. CHECK BALANCE\n";
    cout << "2. DEPOSIT\n";
    cout << "3. WITHDRAW\n";
    cout << "ENTER YOUR CHOICE: ";
    cin >> choice;
    switch (choice) {
        case 1: {
            cout << "YOUR BALANCE IS " << balance;
            break;
        }
        case 2: {
            cout << "ENTER DEPOSIT AMOUNT: ";
            cin >> amount;
            if (amount > 0) {
                balance = balance + amount;
                cout << "DEPOSIT SUCCESSFUL\n";
                cout << "UPDATED BALANCE: " << balance;
            }
            else {
                cout << "INVALID AMOUNT";
            }
            break;
        }
        case 3: {
            cout << "ENTER WITHDRAWAL AMOUNT: ";
            cin >> amount;
            if (amount > 0 && amount <= balance) {
                balance = balance - amount;
                cout << "WITHDRAWAL SUCCESSFUL\n";
                cout << "UPDATED BALANCE: " << balance;
            }
            else {
                cout << "INVALID AMOUNT OR INSUFFICIENT BALANCE";
            }
            break;
        }
        default: {
            cout << "INVALID CHOICE";
        }
    }

    return 0;
}