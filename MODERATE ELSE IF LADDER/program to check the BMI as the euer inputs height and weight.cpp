#include <iostream>
using namespace std;
int main() 
{
    float weight, height, bmi;
    cout << "ENTER WEIGHT IN KG: ";
    cin >> weight;
    cout << "ENTER HEIGHT IN METERS: ";
    cin >> height;
    bmi = weight / (height * height);
    cout << "YOUR BMI IS " << bmi << "\n";
    if (bmi < 19) {
        cout << "THE CATEGORY IS UNDERWEIGHT";
    }
    else if (bmi < 25) {
        cout << "THE CATEGORY IS NORMAL";
    }
    else if (bmi < 30) {
        cout << "THE CATEGORY IS OVERWEIGHT";
    }
    else {
        cout << "THE CATEGORY IS OBESE";
    }

    return 0;
}