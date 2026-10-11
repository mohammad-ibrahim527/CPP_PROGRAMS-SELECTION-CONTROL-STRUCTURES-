#include <iostream>
using namespace std;
int main() 
{
    int choice, quantity, price , total, gst, final_Bill;
    cout << "SELCET AN ITEM FROM THE MENU:\n " ;
    cout << "1. BURGER (350)\n";
    cout << "2. PIZZA (500)\n";
    cout << "3. PASTA (300)\n";
    cout << "4. SANDWICH (150)\n";
    cout << "5. COLD DRINK (50)\n";
    cout << "ENTER ITEM NUMBER: ";
    cin >> choice;
    switch (choice) 
	{
        case 1: {
            price = 350;
            break;
        }
        case 2: {
            price = 500;
            break;
        }
        case 3: {
            price = 300;
            break;
        }
        case 4: {
            price = 150;
            break;
        }
        case 5: {
            price = 50;
            break;
        }
        default: {
            price = 0;
        }
    }
     if(price > 0) {
        cout << "ENTER QUANTITY: ";
        cin >> quantity; 
         if (quantity <= 0) {
            cout << "INVALID QUANTITY";
        }
        else {
            total = price * quantity;
            gst = total * 0.05;
            final_Bill = total + gst;
            cout << "TOTAL: " << total << "\n";
            cout << "GST (5%): " << gst << "\n";
            cout << "YOUR FINAL TOTAL BILL: " << final_Bill;
        }
    }
        return 0;
    }