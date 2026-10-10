#include <iostream>
using namespace std ;
int main ()
{
 int due,Return,fine;
int per_day_fine = 50 ;
cout << "ENTER THE DUE DATE TO RETURN THE BOOK:";
cin >> due ;
cout << "ENTER THE RETURN DATE OF THE BOOK:";
cin >> Return ;
if ( Return > due )
{
	fine = (Return - due) * per_day_fine ;
	cout << "THE PER DAY FINE IS : 50\n ";
	cout << "YOUR FINE IS :" << fine ;
}
	return 0;
}