class Banner
{
public: //members defined in this access-control block
        //are visible outside of the scope of this class

    //Constructor - is a member function of a class which
    //is called during instantiation(activation) of that class.
    //It is defined without a specific return type and a name
    //that matches with the name of the class.
    //A constructor with no parameter or all optional parameters
    //is known as a 'default constructor' because it is implicitly
    //called for the declaration of an object and such a constructor
    //is implicitly defined for a class which does not explicitly 
    //define any constructor 
    Banner()
    {
        width = 20;
        height = 8;
    }

    void Resize(float w, float h) 
    {
        width = w;
        height = h;
    }

    /*
    void Banner::Resize(Banner* this, float w, height h)
    {
        this[0].width = w;
        this[0].height = h;
    }
    */

    double Area() const  //this member function does not mutate the state of an instance
    {
        return width * height;
    }
    /*
    double Banner::Area(const Banner* this)
    {
        return this[0].width * this[0].height;
    }
    */
private: //members defined in this access-control block
         //are not visible outside of the scope of this class

    float width;
    float height;
};
