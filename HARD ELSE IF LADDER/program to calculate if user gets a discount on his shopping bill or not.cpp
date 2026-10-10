#include <iostream>
using namespace std;
int main() 
{
    int bill, discount, total_bill;
    cout << "ENTER SHOPPING BILL : ";
    cin >> bill;

    if (bill >= 10000) {
        discount = bill * 0.20;
    }
    else if (bill >= 5000) {
        discount = bill * 0.15;
    }
    else if (bill >= 2000) {
        discount = bill * 0.10;
    }
    else if (bill >= 1000) {
        discount = bill * 0.05;
    }
    else {
        discount = 0;
    }

    total_bill = bill - discount;
    cout << "YOU WILL GET A DISCOUNT OF : " << discount << "\n";
    cout << "THE NEW TOTAL AMOUNT TO PAY IS : " << total_bill;

    return 0;
}