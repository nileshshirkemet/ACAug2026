#include "boards3.h"
#define PI 3.1416

namespace Ads
{
    double Signboard::Cost() const
    {
        return rate * Area();
    }

    RectangularBoard::RectangularBoard(float diagonal)
    {
        rate = 3.25;
        length = 0.8 * diagonal;
        breadth = 0.6 * diagonal;
    }

    double RectangularBoard::Area() const
    {
        return length * breadth;
    }

    CircularBoard::CircularBoard(float diameter)
    {
        rate = 2.75;
        radius = 0.5 * diameter;
    }

    double CircularBoard::Area() const
    {
        return PI * radius * radius;
    }

    double CircularBoard::Scrap() const
    {
        return rate * (4 - PI) * radius * radius;
    }

    FancyBoard::FancyBoard(float width) : RectangularBoard(0.71 * width), CircularBoard(0.43 * width)
    {
        rate = 3.05;
    }

    double FancyBoard::Area() const
    {
        return RectangularBoard::Area() + CircularBoard::Area();
    }
}
