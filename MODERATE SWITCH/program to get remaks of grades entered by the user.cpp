#include <iostream>
using namespace std;
int main() 
{
    char grade;
    cout << "ENTER GRADE (A, B, C, D, F): ";
    cin >> grade;
    switch (grade) 
	{
        case 'A':
       {
            cout << "EXCELLENT";
            break;
        }
        case 'B':
        {
            cout << "VERY GOOD";
            break;
        }
        case 'C':
       {
            cout << "GOOD";
            break;
        }
        case 'D':
         {
            cout << "NEEDS IMPROVEMENT";
            break;
        }
        case 'F':
        {
            cout << "FAILED";
            break;
        }
        default: 
		{
            cout << "INVALID GRADE";
        }
    }

    return 0;
}