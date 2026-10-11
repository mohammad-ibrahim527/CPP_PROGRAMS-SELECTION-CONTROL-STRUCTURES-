#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string username, password;
    cout << "ENTER USERNAME : ";
    cin >> username;
    cout << "ENTER PASSWORD : ";
    cin >> password;
    if (username == "ME") {
        if (password == "1122@3344") {
            cout << "YOUR LOGIN IS SUCCESSFUL.";
        }
        else {
            cout << "WRONG PASSWORD.";
        }
    }
    else {
        cout << "WRONG USERNAME.";
    }

    return 0;
}