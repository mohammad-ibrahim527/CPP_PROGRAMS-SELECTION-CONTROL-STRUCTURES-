#include <iostream>
using namespace std;
int main() 
{
    char vehicle; float  distance;
    int base_Fare , per_Km , fare;
    cout << "SELECT ANY ONE VEHICLE:\n";
    cout << "1. BIKE (B)\n";
    cout << "2. CAR (C)\n";
    cout << "3. VAN (V)\n";
    cout << "ENTER VEHICLE TYPE: ";
    cin >> vehicle;
    cout << "ENTER DISTANCE IN KM: ";
    cin >> distance;
    switch (vehicle) 
	{
        case 'B':
         {
            base_Fare = 150;
            per_Km = 8;
            break;
        }
        case 'C':
        {
            base_Fare = 250;
            per_Km = 15;
            break;
        }
        case 'V':
         {
            base_Fare = 500;
            per_Km = 22;
            break;
        }
        default: {
            base_Fare = 0;
            per_Km = 0;
        }
    }

    if (base_Fare == 0) {
        cout << "INVALID VEHICLE ";
    }
    else if (distance <= 0) {
        cout << "INVALID DISTANCE";
    }
    else {
        fare = base_Fare + distance * per_Km;
        cout << "THE BASE FARE: " << base_Fare << "\n";
        cout << "THE RATE PER KM: " << per_Km << "\n";
        cout << "THE TOTAL FARE: " << fare;
    }

    return 0;
}