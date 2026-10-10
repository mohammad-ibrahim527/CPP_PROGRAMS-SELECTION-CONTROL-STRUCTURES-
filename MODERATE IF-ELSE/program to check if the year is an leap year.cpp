#include <iostream>
using namespace std;
int main() 
{
    int year;
    cout << "ENTER An YEAR: ";
    cin >> year;
    if (year % 4 == 0 )
	 {
         cout << "THIS YEAR IS A LEAP YEAR";	
	}
    else{
        cout << "THIS YEAR IS NOT A LEAP YEAR";
}
    return 0;
}