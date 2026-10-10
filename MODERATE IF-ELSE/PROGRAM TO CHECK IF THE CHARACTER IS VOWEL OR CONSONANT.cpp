#include <iostream>
using namespace std;
int main() 
{
    char ch;
    cout << "ENTER A CHARACTER: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "THE CHARACTER IS A VOWEL";
    }
	else{
        cout << "THE CHARACTER IS A CONSONANT";
}
    return 0;
}