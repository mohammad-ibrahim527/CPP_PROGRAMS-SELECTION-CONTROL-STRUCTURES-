#include <iostream>
using namespace std ;
int main ()
{
	int p1,p2,x1,x2,y1,y2;
	cout << "ENTER THE BOTTOM RIGHT CORNER OF THE RECANGLE (x,y) :";
	cin >> x1 >> y1 ;
	cout << "ENTER THE TOP LEFT CORNER OF THE RECANGLE (x,y) :";
	cin >> x2 >> y2 ;
	cout << "ENTER THE POINT (x,y) :";
	cin >> p1 >> p2 ;
	if (p1 > x1 && p1 < x2 && p2 > y1 && p2 < y2 ) 
	{
	cout << " THE POINT LIES INSIDE THE RECTANGLE :" ;
    }
	return 0 ;
}