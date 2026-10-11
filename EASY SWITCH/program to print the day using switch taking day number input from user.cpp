#include <iostream>
using namespace std;
int main() 
{
    int day;
    cout << "ENTER A DAY NUMBER (1-7): ";
    cin >> day;
    switch (day) 
	{
        case 1: 
		{
            cout << "THE DAY IS MONDAY";
            break;
        }
        case 2: 
		{
            cout << "THE DAY IS TUESDAY";
            break;
        }
        case 3: 
		{
            cout << "THE DAY IS WEDNESDAY";
            break;
        }
        case 4: 
		{
            cout << "THE DAY IS THURSDAY";
            break;
        }
        case 5: 
		{
            cout << "THE DAY IS FRIDAY";
            break;
        }
        case 6: 
		{
            cout << "THE DAY IS SATURDAY";
            break;
        }
        case 7: 
		{
            cout << "THE DAY IS SUNDAY";
            break;
        }
        default: 
		{
            cout << "INVALID INPUT";
        }
    }

    return 0;
}