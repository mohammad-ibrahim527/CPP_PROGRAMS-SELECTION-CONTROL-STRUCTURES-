#include <iostream>
using namespace std;
int main() 
{
    int temp;
    cout << "ENTER TEMPERATURE IN CELSIUS: ";
    cin >> temp;
    if (temp < 15) {
        cout << "THE WEATHER IS COLD";
    }
    else if (temp <= 30) {
        cout << "THE WEATHER IS WARM";
    }
    else {
        cout << "THE WEATHER IS HOT";
    }

    return 0;
}