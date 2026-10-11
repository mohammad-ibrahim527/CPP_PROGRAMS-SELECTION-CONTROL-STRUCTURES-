#include <iostream>
using namespace std;
int main() 
{
    int x, y;
    char op;
    cout << "ENTER FIRST NUMBER: ";
    cin >> x;
    cout << "ENTER SECOND NUMBER: ";
    cin >> y;
    cout << "ENTER OPERATOR (+, -, *, /): ";
    cin >> op;
    switch (op) 
	{
        case '+': {
            cout << "THE RESULT IS : " << x + y;
            break;
        }
        case '-': {
            cout << "THE RESULT IS : " << x - y;
            break;
        }
        case '*': {
            cout << "THE RESULT IS : " << x * y;
            break;
        }
        case '/': {
            if (y != 0) {
                cout << "THE RESULT IS : " << x / y;
            }
            else {
                cout << "IT CANNOT BE DIVIDED BY ZERO";
            }
            break;
        }
        default: {
            cout << "INVALID INPUT";
        }
    }

    return 0;
}