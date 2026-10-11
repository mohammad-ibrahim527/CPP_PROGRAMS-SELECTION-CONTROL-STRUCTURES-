#include <iostream>
using namespace std;
int main() 
{
    int x;
    cout << "ENTER A NUMBER : ";
    cin >> x;
    if (x > 0) {
        if (x % 2 == 0) {
            cout << "THE NUMBER "<< x <<" IS POSITIVE AND EVEN";
        }
        else {
            cout << "THE NUMBER "<< x << " IS POSITIVE AND ODD";
        }
    }
    else {
        cout << "THE NUMBER "<< x <<" IS NOT POSITIVE";
    }

    return 0;
}