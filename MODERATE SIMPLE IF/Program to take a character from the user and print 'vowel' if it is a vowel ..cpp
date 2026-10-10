#include <iostream>
using namespace std ;
int main ()
{
	char ch;
	cout << "ENTER A CHARACTER :" ;
	cin >> ch ;
	if (ch == 'A'|| ch == 'a'|| ch == 'E' || ch == 'e'||ch == 'I'||ch == 'i'||ch == 'O'||ch == 'o'||ch == 'U'||ch == 'u') 
	{
		cout << "THE CHARACTER IS A VOWEL.";
	}
	return 0;
}