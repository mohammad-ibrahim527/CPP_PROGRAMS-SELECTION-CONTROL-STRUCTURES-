#include <iostream>
using namespace std;
int main() 
{
    int x, y, z;
    cout << "ENTER 1ST NUMBERS: ";
    cin >> x ;
    cout << "ENTER 2ND NUMBERS: ";
    cin >> y ;
    cout << "ENTER 3RD NUMBERS: ";
    cin >> z ;
    if (x >= y && x >= z) {
        cout << "THE LARGEST NUMBER IS : " << x;
    }
    else if (y >= x && y >= z) {
        cout << "THE LARGEST NUMBER IS : " << y;
    }
    else {
        cout << "THE LARGEST NUMBER IS : " << z;
    }

    return 0;
}