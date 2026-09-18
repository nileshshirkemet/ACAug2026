#include "boards1.h"
#include <iostream>

double BuyBoards(Ads::Signboard* each, int count)
{
    float profit = count < 10 ? 1.25 : 1.15;
    return count * profit * each->Cost();
}

int main(void)
{
    std::cout << "Welcome Customer!" << std::endl;
    
    float d = 0;
    std::cout << "Size of each Board: ";
    std::cin >> d;

    int n = 0;
    std::cout << "Number of Boards: ";
    std::cin >> n;

    Ads::RectangularBoard* rb = new Ads::RectangularBoard(d);
    std::cout << "Total payment for rectangular boards = "
              << BuyBoards(rb, n)
              << std::endl;
    delete rb;

    Ads::CircularBoard* cb = new Ads::CircularBoard(d);
    std::cout << "Total payment for circular boards = "
              << BuyBoards(cb, n)
              << std::endl;
    delete cb;
}
