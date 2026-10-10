#include <iostream>
using namespace std;
int main() 
{
    int date, month;
    cout << "ENTER YOUR DATE OF BIRTH: ";
    cin >> date;
    cout << "ENTER YOUR BIRTH MONTH: ";
    cin >> month ;
    if ((month == 12 && date >= 22) || (month == 1 && date <= 19)) {
        cout << "YOUR ZODIAC SIGN IS CAPRICORN";
    }
    else if ((month == 1 && date >= 20) || (month == 2 && date <= 18)) {
        cout << "YOUR ZODIAC SIGN IS AQUARIUS";
    }
    else if ((month == 2 && date >= 19) || (month == 3 && date <= 20)) {
        cout << "YOUR ZODIAC SIGN IS PISCES";
    }
    else if ((month == 3 && date >= 21) || (month == 4 && date <= 19)) {
        cout << "YOUR ZODIAC SIGN IS ARIES";
    }
    else if ((month == 4 && date >= 20) || (month == 5 && date <= 20)) {
        cout << "YOUR ZODIAC SIGN IS TAURUS";
    }
    else if ((month == 5 && date >= 21) || (month == 6 && date <= 20)) {
        cout << "YOUR ZODIAC SIGN IS GEMINI";
    }
    else if ((month == 6 && date >= 21) || (month == 7 && date <= 22)) {
        cout << "YOUR ZODIAC SIGN IS CANCER";
    }
    else if ((month == 7 && date >= 23) || (month == 8 && date <= 22)) {
        cout << "YOUR ZODIAC SIGN IS LEO";
    }
    else if ((month == 8 && date >= 23) || (month == 9 && date <= 22)) {
        cout << "YOUR ZODIAC SIGN IS VIRGO";
    }
    else if ((month == 9 && date >= 23) || (month == 10 && date <= 22)) {
        cout << "YOUR ZODIAC SIGN IS LIBRA";
    }
    else if ((month == 10 && date >= 23) || (month == 11 && date <= 21)) {
        cout << "YOUR ZODIAC SIGN IS SCORPIO";
    }
    else if ((month == 11 && date >= 22) || (month == 12 && date <= 21)) {
        cout << "YOUR ZODIAC SIGN IS SAGITTARIUS";
    }
    else {
        cout << "INVALID INPUT";
    }

    return 0;
}