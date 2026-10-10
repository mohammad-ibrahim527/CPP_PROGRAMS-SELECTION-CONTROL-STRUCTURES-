#include <iostream>
using namespace std;
int main() 
{
    int x;
    cout << "ENTER A NUMBER: ";
    cin >> x;
    if (x % 2 == 0) {
    	cout << "THE NUMBER IS EVEN";
	}
    else {
    	  cout << "THE NUMBER IS ODD";
	}
    return 0;
}