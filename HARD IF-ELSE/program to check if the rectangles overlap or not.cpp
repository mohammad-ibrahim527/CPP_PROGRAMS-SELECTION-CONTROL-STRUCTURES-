#include <iostream>
using namespace std;
int main() 
{
    int ax1, ay1, ax2, ay2, bx1, by1, bx2, by2;
    cout << "ENTER RECTANGLE 1 BOTTOM-LEFT (X Y): ";
    cin >> ax1 >> ay1;
    cout << "ENTER RECTANGLE 1 TOP-RIGHT (X Y): ";
    cin >> ax2 >> ay2;
    cout << "ENTER RECTANGLE 2 BOTTOM-LEFT (X Y): ";
    cin >> bx1 >> by1;
    cout << "ENTER RECTANGLE 2 TOP-RIGHT (X Y): ";
    cin >> bx2 >> by2;
    if (ax1 < bx2 && bx1 < ax2 && ay1 < by2 && by1 < ay2) {
        cout << "THE RECTANGLES OVERLAP";
    }
    else {
        cout << "THE RECTANGLES DO NOT OVERLAP";
}
    return 0;
}