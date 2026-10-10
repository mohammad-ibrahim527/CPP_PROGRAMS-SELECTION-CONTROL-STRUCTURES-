#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "ENTER A CHARACTER: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        cout << "THE CHARACTER IS UPPERCASE";
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "THE CHARACTER IS LOWERCASE";
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "THE CHARACTER IS A DIGIT";
    }
    else {
        cout << "THE CHARACTER IS A SPECIAL CHARACTER";
    }

    return 0;
}