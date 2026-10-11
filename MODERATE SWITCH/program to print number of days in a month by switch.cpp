#include <iostream>
using namespace std;
int main() 
{
	 int month;
    cout << "ENTER MONTH NUMBER (1-12): ";
    cin >> month;
    switch (month) 
	{
        case 1:  {
            cout << "THE MONTH JANUARY HAS 31 DAYS";
            break;
        }
        case 2: {
            cout << "THE MONTH FEBRUARY HAS 28 (IF NOT A LEAP YEAR) OR 29 DAYS (IF IT IS A LEAP YEAR)";
            break;
        }
        case 3:  {
            cout << "THE MONTH MARCH HAS 31 DAYS";
            break;
        }
        case 4:  {
            cout << "THE MONTH APRIL HAS 30 DAYS";
            break;
        }
        case 5:  {
            cout << "THE MONTH MAY HAS 31 DAYS";
            break;
        }
        case 6:  {
            cout << "THE MONTH JUNE HAS 30 DAYS";
            break; 
        }
        case 7:  {
            cout << "THE MONTH JULY HAS 31 DAYS";
            break;
        }
        case 8:  {
            cout << "THE MONTH AUGUST HAS 31 DAYS";
            break;
        }
        case 9:  {
            cout << "THE MONTH SEPTEMBER HAS 30 DAYS";
            break;
        }
        case 10:  {
            cout << "THE MONTH OCTOBER HAS 31 DAYS";
            break;
        }
        case 11: {
            cout << "THE MONTH NOVEMBER HAS 30 DAYS";
            break;
        }
        case 12: {
            cout << "THE MONTH DECEMBER HAS 31 DAYS";
            break;
        }
        default: {
            cout << "INVALID INPUT";
        }
    }
}