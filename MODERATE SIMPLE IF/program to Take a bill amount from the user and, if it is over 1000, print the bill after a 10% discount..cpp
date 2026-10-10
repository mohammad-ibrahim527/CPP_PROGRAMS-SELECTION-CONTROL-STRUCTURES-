#include <iostream>
using namespace std;

int main()
{
int bill;
cout<<"Enter your bill amount: ";
cin>>bill;
if(bill>1000)
{
bill=bill*0.90;
cout<<bill<<endl;
}
return 0;
}

