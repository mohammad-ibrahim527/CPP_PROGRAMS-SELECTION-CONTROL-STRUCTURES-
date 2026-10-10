#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "ENTER A NUMBER : ";
    cin >> x ;
    cout << "ENTER A NUMBER :" ;
    cin >> y ;
    if (x > y) {
        cout << "THE GREATER NUMBER IS : " << x;
    } 
	else {
        cout << "THE GREATER NUMBER IS : " << y;
}
    return 0;
}