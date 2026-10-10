#include <iostream>
using namespace std ;
int main ()
{
   int start_1 , start_2 , end_1 , end_2 ;
   cout << "enTER THE START AND END OF FISRT INTERVAL :";
   cin >> start_1 ;
   cin >> end_1 ;
   cout << "ENTER THE START AND END OF SECOND INTERVAL :" ;
   cin >> start_2 ;
   cin >>end_2 ;
   if (start_1 <= end_2 && start_2 <= end_1)
   {
   	cout << " THE INTERVALS ARE OVERLAP.";
   }
	return 0;
}