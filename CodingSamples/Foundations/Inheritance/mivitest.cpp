#include "boards3.h"
#include <iostream>

using namespace Ads;

double BuyBoards(Signboard* each, int count)
{
    float profit = count < 10 ? 1.25 : 1.15;
    return count * profit * each->Cost();
}

int main(void)
{
    using namespace std;
    
    cout << "Welcome Customer!" << endl;
    
    float d = 0;
    cout << "Size of each Board: ";
    cin >> d;

    int n = 0;
    cout << "Number of Boards: ";
    cin >> n;

    RectangularBoard* rb = new RectangularBoard(d);
    cout << "Total payment for rectangular boards = "
              << BuyBoards(rb, n)
              << endl;
    delete rb;

    CircularBoard* cb = new CircularBoard(d);
    cout << "Total payment for circular boards = "
              << BuyBoards(cb, n)
              << endl;
    delete cb;

    FancyBoard* fb = new FancyBoard(d);
    cout << "Total payment for fancy boards = "
              << BuyBoards(fb, n)
              << endl; 
    delete fb; 
}