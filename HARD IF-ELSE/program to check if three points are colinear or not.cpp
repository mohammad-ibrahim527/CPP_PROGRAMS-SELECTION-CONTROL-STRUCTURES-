#include <iostream>
using namespace std;
int main() 
{
    int x1, y1, x2, y2, x3, y3,area;
    cout << "ENTER 1ST POINT (X Y): ";
    cin >> x1 >> y1;
    cout << "ENTER SECOND POINT (X Y): ";
    cin >> x2 >> y2;
    cout << "ENTER THIRD POINT (X Y): ";
    cin >> x3 >> y3;
    area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    cout << "\n";
    if (area ==0){
        cout << "THE POINTS ARE COLLINEAR";
    }
	else{
        cout << "THE POINTS ARE NOT COLLINEAR";
}
    return 0;
}