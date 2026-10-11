#include <iostream>
using namespace std;

int main() {
    int choice,perimeter,circumference, a, b, c, d;
    cout << "SELECT ONE FROM BELOW:\n";
    cout << "1. SQUARE\n";
    cout << "2. RECTANGLE\n";
    cout << "3. CIRCLE\n";
    cout << "4. TRIANGLE\n";
    cout << "ENTER YOUR CHOICE: ";
    cin >> choice;
    switch (choice) {
        case 1: {
            cout << "ENTER SIDE: ";
            cin >> a;
            if (a > 0) {
            	perimeter =  4 * a ;
                cout << "THE PERIMETER OF THE SQUARE IS : " << perimeter;
            }
            else {
                cout << "INVALID INPUT";
            }
            break;
        }
        case 2: {
            cout << "ENTER LENGTH: ";
            cin >> a;
            cout << "ENTER WIDTH: ";
            cin >> b;
            if (a > 0 && b > 0) {
            	perimeter = 2 * (a + b) ;
                cout << "THE PERIMETER OF THE RECTANGLE IS : " << perimeter ;
            }
            else {
                cout << "INVALID iNPUT";
            }
            break;
        }
        case 3: {
            cout << "ENTER RADIUS: ";
            cin >> a;
            if (a > 0) {
            	circumference = 2 * 3.1416 * a ;
                cout << "THE CIRCUMFERENCE OF THE CIRCLE IS : " << circumference ;
            }
            else {
                cout << "INVALID INPUT";
            }
            break;
        }
        case 4: {
            cout << "ENTER THREE SIDES: ";
            cin >> a >> b >> c;
            if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b) {
            	perimeter = a + b + c ;
                cout << "THE PERIMETER OF THE TRIANGLE IS : " << perimeter ;
            }
            else {
                cout << "invalid VALID TRIANGLE";
            }
            break;
        }
        default: {
            cout << "INVALID CHOICE";
        }
    }

    return 0;
}