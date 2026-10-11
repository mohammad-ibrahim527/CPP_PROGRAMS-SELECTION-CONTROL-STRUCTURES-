#include <iostream>
using namespace std;
int main() 
{
    char pole, turn;
    cout << "ENTER YOUR CURRENT POLE (N, E, S, W): ";
    cin >> pole;
    cout << "ENTER THE DIRECTION YOU ARE GOING TO TURN (LEFT : L , RIGHT:R ): ";
    cin >> turn;

    switch (pole) {
        case 'N':
        {
            switch (turn) {
                case 'L':
                {
                    cout << "YOU ARE NOW FACING WEST";
                    break;
                }
                case 'R':
                {
                    cout << "YOU ARE NOW FACING EAST";
                    break;
                }
                default: {
                    cout << "INVALID TURN";
                }
            }
            break;
        }
        case 'E':
        {
            switch (turn) {
                case 'L':
                {
                    cout << "YOU ARE NOW FACING NORTH";
                    break;
                }
                case 'R':
                {
                    cout << "YOU ARE NOW FACING SOUTH";
                    break;
                }
                default: {
                    cout << "INVALID TURN";
                }
            }
            break;
        }
        case 'S':
        {
            switch (turn) {
                case 'L':
                {
                    cout << "YOU ARE NOW FACING EAST";
                    break;
                }
                case 'R':
                {
                    cout << "YOU ARE NOW FACING WEST";
                    break;
                }
                default: {
                    cout << "INVALID TURN";
                }
            }
            break;
        }
        case 'W':
        {
            switch (turn) {
                case 'L':
                {
                    cout << "YOU ARE NOW FACING SOUTH";
                    break;
                }
                case 'R':
                {
                    cout << "YOU ARE NOW FACING NORTH";
                    break;
                }
                default: {
                    cout << "INVALID TURN";
                }
            }
            break;
        }
        default: {
            cout << "INVALID DIRECTION";
        }
    }

    return 0;
}