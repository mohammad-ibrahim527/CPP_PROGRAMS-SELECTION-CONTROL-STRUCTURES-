#include <iostream>
using namespace std;
int main() 
{
    int baggage_Weight;
    char ticket, ID;
    cout << "YOU HAVE TICKET BOOKED (YES:Y, NO=N): ";
    cin >> ticket;
    cout << "YOU HAVE ID PROOF (YES:Y, NO=N): ";
    cin >> ID;
    cout << "ENTER BAGGAGE WEIGHT IN KG: ";
    cin >> baggage_Weight;
    if (ticket == 'Y') {
        if (ID == 'Y') {
            if (baggage_Weight <= 30) {
                cout << "CHECK-IN SUCCESSFUL";
            }
            else if (baggage_Weight <= 40) {
                cout << "CHECK-IN SUCCESSFUL, EXTRA BAGGAGE FEE APPLIES";
            }
            else {
                cout << "CHECK-IN DENIED: BAGGAGE TOO HEAVY";
            }
        }
        else {
            cout << "CHECK-IN DENIED: ID PROOF REQUIRED";
        }
    }
    else {
        cout << "CHECK-IN DENIED: NO TICKET BOOKED";
    }

    return 0;
}