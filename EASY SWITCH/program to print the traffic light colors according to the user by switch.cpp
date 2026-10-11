#include <iostream>
using namespace std;

int main() {
    char color;
    cout << "ENTER LIGHT COLOR ( RED: R , YELLOW: Y , GREEN: G ) : ";
    cin >> color;
    switch (color) 
	{
        case 'R':
        {
            cout << "STOP!";
            break;
        }
        case 'Y':
        {
            cout << "GET READY!";
            break;
        }
        case 'G':
        {
            cout << "GO!";
            break;
        }
        default: 
		{
            cout << "INVALID COLOR INPUT";
        }
    }

    return 0;
}