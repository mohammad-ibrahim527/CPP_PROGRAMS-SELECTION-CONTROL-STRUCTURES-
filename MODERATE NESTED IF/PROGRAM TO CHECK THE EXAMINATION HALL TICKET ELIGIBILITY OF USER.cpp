#include <iostream>
using namespace std;
int main() 
{
    int attendance; 
	char feePaid;
    cout << "ENTER ATTENDANCE PERCENTAGE: ";
    cin >> attendance;
    cout << "ENTER FEE PAID (YES:Y , NO:N ): ";
    cin >> feePaid;
    if (attendance >= 75) {
        if (feePaid == 'Y') {
            cout << "HALL TICKET ISSUED";
        }
        else {
            cout << "HALL TICKET DENIED: FEE NOT PAID";
        }
    }
    else {
        if (feePaid == 'Y') {
            cout << "HALL TICKET DENIED: LOW ATTENDANCE";
        }
        else {
            cout << "HALL TICKET DENIED: LOW ATTENDANCE AND FEE NOT PAID";
        }
    }

    return 0;
}