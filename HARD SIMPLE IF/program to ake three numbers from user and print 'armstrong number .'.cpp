#include <iostream>
using namespace std;

int main()
{
int num, input, remainder, sum =0;
{
cout <<"Enter a 3 digit number: ";
cin >>num;
input=num;
remainder= num%10;
sum += remainder*remainder*remainder;
num = num/10;

remainder = num%10;
sum += remainder * remainder * remainder;
num = num/10;

remainder = num%10;
sum += remainder * remainder * remainder;
if(sum == input)
{
cout<<"The given number is an armstrong number";
}
}
return 0;
}

