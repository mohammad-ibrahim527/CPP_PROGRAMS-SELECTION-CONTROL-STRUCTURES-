#include <iostream>
using namespace std;
int main() 
{
    int x, y, z;
    cout << "ENTER FIRST NUMBER: ";
    cin >> x ;
    cout << "ENTER SECOND NUMBER: ";
    cin >> y ;
    cout << "ENTER THIRD NUMBER: ";
    cin >> z ;
    if (x >= y) {
        if (x >= z) {
            cout << "THE LARGEST NUMBER IS : " << x;
        }
        else {
            cout << "THE LARGEST NUMBER IS : " << z;
        }
    }
    else {
        if (y >= x) {
        	if (y >= z) {
            cout << "THE LARGEST NUMBER IS : " << y;
        }
        }
        else {
            cout << "THE LARGEST NUMBER IS : " << z;
        }
    }

    return 0;
}