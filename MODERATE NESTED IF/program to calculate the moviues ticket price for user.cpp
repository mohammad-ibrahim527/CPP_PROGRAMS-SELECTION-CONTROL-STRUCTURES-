#include <iostream>
using namespace std;
int main() 
{
    int price,NOP,total_price;
    char day,seat ;
    cout << "ENTER NUMBER OF PEOPLE GOING : ";
    cin >> NOP;
    cout << "ENTER DAY (WEEKDAY : W, WEEKEND:E): ";
    cin >> day;
    cout << "ENTER SEAT TYPE (REGULAR : R, PREMIUM : P): ";
    cin >> seat;

    if (day == 'W') {
        if (seat == 'R') {
            price = 200;
        }
        else {
            price = 350;
        }
    }
    else {
        if (seat == 'R') {
            price = 300;
        }
        else {
            price = 450;
        }
    }
    total_price = price * NOP ;
     cout << "THE TICKET PRICE IS : " << total_price;

    return 0;
}