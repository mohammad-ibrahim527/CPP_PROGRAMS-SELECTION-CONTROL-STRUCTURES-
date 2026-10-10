#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "ENTER AGE: ";
    cin >> age;
    if (age >= 18) {
        cout << "THE PERSON IS ELIGIBLE TO VOTE";
    }
	else {
        cout << "THE PERSON IS NOT ELIGIBLE TO VOTE";
}
    return 0;
}