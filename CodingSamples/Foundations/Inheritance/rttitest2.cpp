#include "boards2.h"
#include <iostream>

using namespace Ads;

double BuyBoards(Signboard* each, int count)
{
    float profit = count < 10 ? 1.25 : 1.15;
    float extra = 0;
    Wasteful* w = dynamic_cast<Wasteful*>(each);
    if(w)
        extra = 0.5 * w->Scrap();
    return count * profit * each->Cost() + extra;
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
}