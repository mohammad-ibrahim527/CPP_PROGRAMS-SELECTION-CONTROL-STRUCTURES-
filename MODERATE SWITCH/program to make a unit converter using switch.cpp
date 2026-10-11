#include <iostream>
using namespace std;
int main() 
{
    int choice;
    float value,result;
    cout << "CHOOSE ANY ONE:\n" ;
    cout << "1. KM TO M\n";
    cout << "2. M TO CM\n";
    cout << "3. KG TO G\n";
    cout << "4. G TO KG\n";
    cout << "ENTER YOUR CHOICE: ";
    cin >> choice;
    cout << "ENTER THE VALUE: ";
    cin >> value;
    switch (choice) 
	{
        case 1: {
        	result = value * 1000  ;
            cout <<" KM = " << result << " M";
            break;
        }
        case 2: {
        	result = value * 100 ;
            cout << " M = " << result << " CM";
            break;
        }
        case 3: {
        	result = value * 1000 ;
            cout << "KG = " << result << " G";
            break;
        }
        case 4: {
        	result = value / 1000 ;
            cout << "G = " << result << " KG";
            break;
        }
        default: 
		{
            cout << "INVALID CHOICE";
        }
    }

    return 0;
}