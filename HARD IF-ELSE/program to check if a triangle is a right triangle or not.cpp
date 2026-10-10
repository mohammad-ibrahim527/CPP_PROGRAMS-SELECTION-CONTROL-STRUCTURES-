#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;
    cout << "ENTER THREE SIDES: ";
    cin >> a >> b >> c;
    if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
        cout << "THE TRIANGLE IS RIGHT-ANGLED";	
	}
         else {
         	 cout << "THE TRIANGLE IS NOT RIGHT-ANGLED";
		 }
    return 0;
}