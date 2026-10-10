#include <iostream>
using namespace std;
int main() 
{
    int X;
    cout << "ENTER A NUMBER: ";
    cin >> X;
    if (X > 0) {
        cout << "THE NUMBER IS POSITIVE";
    }
    else if (X < 0) {
        cout << "THE NUMBER IS NEGATIVE";
    }
    else {
        cout << "THE NUMBER IS ZERO";
    }
    

    return 0;
}