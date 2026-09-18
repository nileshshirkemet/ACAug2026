#include <iostream>
#include <string>

using namespace std;

//Function template - is a generic function with one or more
//type parameters. A function template cannot be called so
//a templated function is generated at compile time from call 
//expression by replacing type parameters by their usage types
template<typename T> 
T Select(int choice, T first, T second) //Select function template with type-parameter T
{
    if(choice % 2)
        return first;
    return second;
}


int main(void)
{
    int s;
    cout << "Selector: ";
    cin >> s;

    double dx = 4.25, dy = 3.75;
    cout << "Selected double = "
         << Select(s, dx, dy) //Select<double>(s, dx, dy)
         << endl;

    string sx = "Monday", sy = "Tuesday";
    cout << "Selected string = "
         << Select(s, sx, sy) //Select<string>(s, sx, sy)
         << endl;

}