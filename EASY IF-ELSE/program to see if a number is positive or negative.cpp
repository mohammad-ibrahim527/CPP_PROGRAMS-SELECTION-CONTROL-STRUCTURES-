#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "ENTER A NUMBER: ";
    cin >> x;
    if (x >= 0) {
    	cout << "THE NUMBER IS POSITIVE";
	}
    else {
    	  cout << "THE NUMBER IS NEGATIVE";
	}
    return 0;
}