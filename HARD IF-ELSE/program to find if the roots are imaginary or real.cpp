#include <iostream>
using namespace std;
int main() 
{
    int a, b, c,DISCRIMINANT_d;
    cout << "ENTER COEFFICIENTS A, B, C: ";
    cin >> a >> b >> c;
    DISCRIMINANT_d = b * b - 4 * a * c;
    if (DISCRIMINANT_d >= 0)
        cout << "THE ROOTS ARE REAL : " << DISCRIMINANT_d;
    else
        cout << "THE ROOTS ARE IMAGINARY : " << DISCRIMINANT_d;

    return 0;
}