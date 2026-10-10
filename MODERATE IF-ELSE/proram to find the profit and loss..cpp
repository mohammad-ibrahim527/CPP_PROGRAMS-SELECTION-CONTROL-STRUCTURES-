#include <iostream>
using namespace std;
int main() 
{
    int cp, sp, profit,loss;
    cout << "ENTER COST PRICE: ";
    cin >> cp;
    cout << "ENTER SELLING PRICE: ";
    cin >> sp;
    if (sp > cp) {
    	profit = sp -cp ;
        cout << "THE PROFIT IS : " << profit;
    }
	else{
		loss = cp - sp ;
        cout << "THE LOSS IS : " << loss ;
}
    return 0;
}