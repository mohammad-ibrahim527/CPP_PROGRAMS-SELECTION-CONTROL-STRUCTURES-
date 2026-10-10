#include <iostream>
using namespace std;
int main() 
{
    int weight, distance,courier_charge;
    int weightCharge, distanceCharge;
    cout << "ENTER WEIGHT IN KG: ";
    cin >> weight;
    cout << "ENTER DISTANCE IN KM: ";
    cin >> distance;

    if (weight <= 1) {
        weightCharge = 50;
    }
    else if (weight <= 5) {
        weightCharge = 100;
    }
    else if (weight <= 10) {
        weightCharge = 200;
    }
    else {
        weightCharge = 350;
    }

    if (distance <= 100) {
        distanceCharge = 0;
    }
    else if (distance <= 500) {
        distanceCharge = 50;
    }
    else {
        distanceCharge = 150;
    }

    courier_charge = weightCharge + distanceCharge ;
    cout << "THE COURIER CHARGE IS " << courier_charge ;

    return 0;
}