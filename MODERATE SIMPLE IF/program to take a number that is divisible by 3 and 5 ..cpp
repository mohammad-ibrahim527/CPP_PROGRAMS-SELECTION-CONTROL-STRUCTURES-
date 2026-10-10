#include <iostream>
using namespace std;

int main()
{
int num;
cout << "Enter the number: ";
cin >> num;
if(num%3==0 && num%5==0)
{
cout <<"This number is divisible by both 3 and 5";
}
return 0;
}
