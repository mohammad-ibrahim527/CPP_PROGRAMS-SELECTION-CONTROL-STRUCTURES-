#include <iostream>
using namespace std;
int main() 
{
    int x, y;
    cout << "ENTER THE POINT : ";
    cin >> x >> y;
    if (x > 0 && y > 0) {
        cout << "THE POINT LIES IN QUADRANT 1";
    }
    else if (x < 0 && y > 0) {
        cout << "THE POINT LIES IN QUADRANT 2";
    }
    else if (x < 0 && y < 0) {
        cout << "THE POINT LIES IN QUADRANT 3";
    }
    else if (x > 0 && y < 0) {
        cout << "THE POINT LIES IN QUADRANT 4";
    }
    else {
        cout << "ENTER CORRECT POINT.";
    }

    return 0;
}