#include <iostream>
using namespace std;
int main() 
{
    int x;
    cout << "ENTER A NUMBER: ";
    cin >> x;
    if (x > 0) {
        if (x < 100) {
            cout << "THE NUMBER IS POSITIVE AND BELOW 100";
        }
        else {
            cout << "THE NUMBER IS POSITIVE BUT ABOVE THAN 100";
        }
    }
    else {
        cout << "THE NUMBER IS NOT POSITIVE";
    }

    return 0;
}