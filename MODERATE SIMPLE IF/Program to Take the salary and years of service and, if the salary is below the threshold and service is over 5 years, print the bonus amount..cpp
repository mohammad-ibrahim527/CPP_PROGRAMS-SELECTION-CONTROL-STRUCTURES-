#include <iostream>
using namespace std ;
int main ()
{
	int salary , years ;
	cout << "ENYTER TOUR SALARY:";
	cin >> salary ;
	cout << "ENTER THE NUMBER OF YEARS YO HAVE WORKED HERE :";
	cin >> years ;
	int threshold = 100000 ;
	float bonus_rule = 0.20 ;
	if (salary < threshold && years > 5) {
		int Bonus = salary * bonus_rule ;
		cout << "your bonus amount will be :" << Bonus ;
	}
	return 0;
}