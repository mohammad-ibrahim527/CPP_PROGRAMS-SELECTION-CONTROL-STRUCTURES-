#include <iostream>
using namespace std;
int main() 
{
    int choice;
    float a, b;
    cout << "SELECT ANY ONE.\n";
    cout << "1. CIRCLE\n";
    cout << "2. RECTANGLE\n";
    cout << "3. SQUARE\n";
    cout << "4. TRIANGLE\n";
    cout << "WHOSE AREA DO YOU WNAT TO CALCULATE? , ENTER YOUR CHOICE: ";
    cin >> choice;
    switch (choice) 
	{
        case 1: {
            cout << "ENTER RADIUS: ";
            cin >> a;
            cout << "THE AREA OF THE CIRCLE IS " << 3.14159 * a * a;
            break;
        }
        case 2: {
            cout << "ENTER LENGTH: ";
            cin >> a;
            cout << "ENTER WIDTH: ";
            cin >> b;
            cout << "THE AREA OF THE RECTANGLE IS " << a * b;
            break;
        }
        case 3: {
            cout << "ENTER SIDE: ";
            cin >> a;
            cout << "THE AREA OF THE SQUARE IS " << a * a;
            break;
        }
        case 4: {
            cout << "ENTER BASE: ";
            cin >> a;
            cout << "ENTER HEIGHT: ";
            cin >> b ;
            cout << "THE AREA OF THE TRIANGLE IS " << 0.5 * a * b;
            break;
        }
        default: {
            
            cout << "INVALID CHOICE";
        }
    }

    return 0;
}