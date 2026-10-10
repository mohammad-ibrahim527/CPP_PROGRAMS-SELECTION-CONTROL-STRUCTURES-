#include <iostream>
using namespace std;
int main() 
{
    int marks;
    cout << "ENTER MARKS: ";
    cin >> marks;
    if (marks >= 40) {
        cout << "THE STUDENT HAS PASSED";
    }
    else {
        cout << "THE STUDENT HAS FAILED";
}
    return 0;
}