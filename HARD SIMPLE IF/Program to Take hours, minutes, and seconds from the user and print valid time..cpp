#include <iostream>
using namespace std ;
int main ()
{
	int H , S, M ;
	cout << "ENTER HOUR  :" ;
	cin >> H ;
	cout << "ENTER MINUTES :";
	cin >> M ;
	cout << "ENTER SECONDS :";
	cin >> S ;
	if (H >=0 && H <=23 && M >= 0 && M <=59 && S >=0 && S <=59) 
	{
		cout << "THE TIME IS " << H << " HOURS  " << M << " MINUTES AND " << S << " SECONDS." ;
		cout << "\nIT IS A VALID TIME. ";
	}
	return 0;
}