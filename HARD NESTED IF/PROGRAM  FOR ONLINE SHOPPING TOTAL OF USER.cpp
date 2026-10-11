#include <iostream>
using namespace std;
int main() {
	
    int total, discount = 0, final_Amount,shipping;
	char member, Stock, express, coupon;
    cout << "ENTER CART TOTAL: ";
    cin >> total;
    cout << "ENTER COUPON (YES:Y, NO=N) : ";
    cin >> coupon;
    cout << "ENTER MEMBER (YES:Y, NO=N) : ";
    cin >> member;
    cout << "ENTER STOCK AVAILABLE (YES:Y, NO=N): ";
    cin >> Stock;
    cout << "ENTER SHIPPING (EXPRESS:E , STANDARD:S): ";
    cin >> express;
    if (Stock == 'Y') {
        if (total > 0) {
            if (coupon == 'Y') {
                discount = total * 0.10;
            }
            if (member == 'Y') {
                discount = discount + total * 0.05;
            }

            final_Amount = total - discount;

            if (express == 'E') {
                shipping = 200;
            }
            else {
                if (final_Amount >= 1000) {
                    shipping = 0;
                }
                else {
                    shipping = 80;
                }
            }

            final_Amount = final_Amount + shipping;

            cout << "DISCOUNT: " << discount << "\n";
            cout << "SHIPPING: " << shipping << "\n";
            cout << "FINAL AMOUNT: " << final_Amount;
        }
        else {
            cout << "INVALID CART TOTAL";
        }
    }
    else {
        cout << "ITEM IS OUT OF STOCK";
    }

    return 0;
}