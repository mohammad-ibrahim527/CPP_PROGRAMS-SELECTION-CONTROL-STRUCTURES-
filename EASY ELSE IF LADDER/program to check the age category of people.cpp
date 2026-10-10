#include <iostream>
using namespace std;
int main() 
{
    int age;
    cout << "ENTER AGE: ";
    cin >> age;
    if (age <= 12) {
        cout << "THE PERSON IS A CHILD";
    }
    else if (age <= 19) {
        cout << "THE PERSON IS A TEENAGER";
    }
    else if (age <= 59) {
        cout << "THE PERSON IS AN ADULT";
    }
    else if (age >= 60) {
        cout << "THE PERSON IS A SENIOR";
    }
    else {
        cout << "INVALID AGE";
}
    return 0;
}