#include <cmath>

class Box
{
public:
    //initializer syntax
    Box(float l, float b, float h) : length(l), breadth(b), height(h)
    {
    }

    //a member function declared with 'virtual' keyword
    //can be overridden in the derived class
    virtual double Material() const
    {
        return 2 * (length * breadth + breadth * height + height * length) * 0.03;
    }

    //declaring member function
    virtual double Capacity() const;

    double Diagonal() const
    {
        return sqrt(length * length + breadth * breadth + height * height);
    }

    //a virtual destructor indicates that this class 
    //is safe for inheritance
    virtual ~Box() {}

private:
    float length, breadth, height;
};

//defining function Capacity declared as member of class Box
double Box::Capacity() const
{
    return length * breadth * height;
}

//Defining RigidBox as a derived class of Box(base class)
class RigidBox : public Box
{
public:
    //a derived class constructor must call a base class
    //constructor in the initializer
    RigidBox(float l, float b, float h, float t) : Box(l, b, h), thickness(t)
    {
    }

    //function overriding - defining a function in a derived class
    //whose decaration matches with the declaration of a virtual
    //function defined in the base class
    double Material() const
    {
        return 1.5 * thickness * Box::Material();
    }
private:
    float thickness;
};
