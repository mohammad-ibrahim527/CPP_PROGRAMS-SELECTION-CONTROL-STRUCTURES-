#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "ENTER FIRST SIDE: ";
    cin >> a ;
    cout << "ENTER SECOND SIDE: ";
    cin >> b ;
    cout << "ENTER THIRD SIDE: ";
    cin >> c ;
    if (a > 0 && b > 0 && c > 0) {
        if (a + b > c && b + c > a && a + c > b) {
            cout << "IT IS A TRIANGLE\n";
            if (a == b && b == c) {
                cout << "THE IS  AN EQUILATERAL TRIANGLE";
            }
            else if (a == b || b == c || a == c) {
                cout << "THE IS AN ISOSCELES TRIANGLE";
            }
            else {
                cout << "THE IS AN SCALENE TRIANGLE";
            }
        }
        else {
            cout << "NOT A TRIANGLE";
        }
    }

    return 0;
}