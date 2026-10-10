#include <iostream>
using namespace std ;
int main()
{
    int units,Bill ; 
    cout << "Enter Units consumed:" ;
    cin >> units ;
    if(units>=0&&units<=100) 
    {
        Bill=units*10;
        cout << "The total electricity bill is :" << Bill ;
    }
    else if(units>=101&&units<=200)
    {
        Bill=units*20 ;
        cout << "The total electricity bill is :" << Bill ;
    }
    else if(units>=201&&units<=500)
    {
        Bill=units*50;
        cout << "The total electricity bill is :" << Bill ;
    }
    else if(units>=501&&units<=1000)
    {
        Bill=units*100;
        cout << "The total electricity bill is :" << Bill ;
    }
    else if(units>1000)
    {
        Bill=units*150 ;
        cout << "The total electricity bill is :" << Bill ;
    }
    else if(units<0)
    {
        cout << "Please! Enter correct units.";
    }
    return 0;
}