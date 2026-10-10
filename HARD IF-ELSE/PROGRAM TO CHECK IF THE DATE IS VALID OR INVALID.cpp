#include <iostream>
using namespace std;
int main() 
{
    int day, month, year;
    int Days = 0;

    cout << "ENTER DAY/MONTH/YEAR: ";
    cin >> day >> month >> year;

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) {
        Days = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        Days = 30;
    }
    else if (month == 2) {
        if (year % 4 == 0 ) {
            Days = 29;}
        else{
            Days = 28;}
    }
    if (year > 0 && day >= 1 && day <= Days) {
        cout << "THE DATE IS VALID";
    }
    else {
        cout << "THE DATE IS INVALID";
}
    return 0;
}