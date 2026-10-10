#include<iostream>
using namespace std ;
int main () 
{
	char ch ;
	cout << " Enter a character: " ;
	cin >> ch ;
	if (ch>=65&&ch<=91) 
     {
	cout << "Character is uppercase"<< endl ;
}
 	else  {
		cout << "character is lowercase " << endl ;
	} 
     return 0 ;
 }