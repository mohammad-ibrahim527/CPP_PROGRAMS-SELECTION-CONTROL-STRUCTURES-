#include <iostream>
using namespace std;
int main() 
{
    int month;
    cout << "ENTER A MONTH NUMBER (1-12): ";
    cin >> month;
    switch (month) 
	{
        case 1: {
            cout << "THE MONTH IS JANUARY";
            break;
        }
        case 2: {
            cout << "THE MONTH IS FEBRUARY";
            break;
        }
        case 3: {
            cout << "THE MONTH IS MARCH";
            break;
        }
        case 4: {
            cout << "THE MONTH IS APRIL";
            break;
        }
        case 5: {
            cout << "THE MONTH IS MAY";
            break;
        }
        case 6: {
            cout << "THE MONTH IS JUNE";
            break;
        }
        case 7: {
            cout << "THE MONTH IS JULY";
            break;
        }
        case 8: {
            cout << "THE MONTH IS AUGUST";
            break;
        }
        case 9: {
            cout << "THE MONTH IS SEPTEMBER";
            break;
        }
        case 10: {
            cout << "THE MONTH IS OCTOBER";
            break;
        }
        case 11: {
            cout << "THE MONTH IS NOVEMBER";
            break;
        }
        case 12: {
            cout << "THE MONTH IS DECEMBER";
            break;
        }
        default: 
		{
            cout << "INVALID INPUT";
        }
    }

    return 0;
}