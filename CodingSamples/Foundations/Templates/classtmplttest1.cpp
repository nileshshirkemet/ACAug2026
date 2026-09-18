#include <iostream>
#include <string>

using namespace std;

//Class template - is a generic class with one or more 
//type parameters. A class template cannot be used as 
//as a data-type so a templated class is generated at 
//compile-time from declaration statement by replacing 
//type parameters by their usage types
template<typename Any>
class Selector //Selector class template with type-parameter Any
{
public:
    Selector(Any a, Any b) : first(a), second(b)
    {

    }

    Any Select(int choice) const
    {
        if(choice % 2)
            return first;
        return second;
    }

private:
    Any first, second;
};


int main(void)
{
    int s;
    cout << "Choice: ";
    cin >> s;

    Selector<double> ds(4.25, 3.75); //activating templated Selector class
    cout << "Selected Any = "
         << ds.Select(s)
         << endl;

    Selector<string> ss("Monday", "Tuesday");
    cout << "Selected string = "
         << ss.Select(s)
         << endl;
}
