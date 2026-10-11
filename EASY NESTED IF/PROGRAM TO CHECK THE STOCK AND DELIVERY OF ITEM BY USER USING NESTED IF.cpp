#include <iostream>
#include <string>
using namespace std;
int main() 
{
    char Stock,Address;
    cout << "ENTER IF THE ITEM IS AVAILABLE IN STOCK (YES = Y, NO = N): ";
    cin >> Stock;
    cout << "THE ENTERED ADDRESS IS CORRECT : (YES = Y, NO = N) : ";
    cin >> Address;
    if (Stock == 'Y') {
        if (Address == 'Y') {
            cout << "THE ORDER WILL BE DELIVERED.";
        }
        else {
            cout << "THE ORDER CANNOT BE DELIVERED, ADDRESS IS INVALID.";
        }
    }
    else {
        cout << "THE ITEM IS OUT OF STOCK.";
    }

    return 0;
}