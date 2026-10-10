#include <iostream>
using namespace std;
int main() 
{
    int x;
    cout << "ENTER A NUMBER: ";
    cin >> x;
    if (x % 7 == 0) {
        cout << "THE NUMBER IS DIVISIBLE BY 7";
    }
	else{
        cout << "THE NUMBER IS NOT DIVISIBLE BY 7";
}
    return 0;
}