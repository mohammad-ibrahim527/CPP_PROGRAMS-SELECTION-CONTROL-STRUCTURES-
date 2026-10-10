#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;
   cout << "ENTER 1ST SIDE : ";
    cin >> a ;
    cout << "ENTER 2ND SIDE : ";
    cin >> b ;
    cout << "ENTER 3RD SIDE : ";
    cin >> c ;
    if (a == b && b == c) {
        cout << "THE TRIANGLE IS EQUILATERAL";
    }
    else if (a == b || b == c || a == c) {
        cout << "THE TRIANGLE IS ISOSCELES";
    }
    else {
        cout << "THE TRIANGLE IS SCALENE";
    }

    return 0;
}