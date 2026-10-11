#include <iostream>
using namespace std;
int main() 
{
    int choice,temp,calculation;
    cout << "SELECT ANYONE :\n " ;
    cout << "1. CELSIUS TO FAHRENHEIT\n";
    cout << "2. FAHRENHEIT TO CELSIUS\n";
    cout << "3. CELSIUS TO KELVIN\n";
    cout << "4. KELVIN TO CELSIUS\n";
    cout << "ENTER YOUR CHOICE: ";
    cin >> choice;
    cout << "ENTER THE TEMPERATURE: ";
    cin >> temp;
    switch (choice) 
	{
        case 1: {
        	calculation = (temp * 9 / 5) + 32 ;
            cout << " TEMPERATURE IN FAHRENHEIT IS : " << calculation << " F ";
            break;
        }
        case 2: {
        	calculation = (temp - 32) * 5 / 9 ;
            cout << " TEMPERATURE IN CELSIUS IS : " << calculation << " C ";
            break;
        }
        case 3: {
        	calculation = temp + 273.15 ;
            cout << " TEMPERATURE IN KELVIN IS : " << calculation << " K";
            break;
        }
        case 4: {
            if (temp >= 0) {
            	calculation = temp - 273.15 ;
                cout << " TEMPERATURE IN CELSIUS IS : " << calculation << " C";
            }
            else {
                cout << "KELVIN CANNOT BE NEGATIVE";
            }
            break;
        }
        default: 
		{
            cout << "INVALID CHOICE";
        }
    }

    return 0;
}