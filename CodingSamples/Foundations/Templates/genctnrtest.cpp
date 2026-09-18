#include "interval.h"
#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main(void)
{
    vector<Interval> a; //sequential container
    a.push_back(Interval(4, 31));
    a.push_back(Interval(7, 42));
    a.push_back(Interval(6, 53));
    a.push_back(Interval(5, 14));
    a.push_back(Interval(3, 25));
    a.push_back(Interval(6, 36));
    a.push_back(Interval(2, 151));
    cout << "All intervals in the vector" << endl;
    for(int i = 0; i < a.size(); ++i)
    {
        cout << a.at(i) << endl;
    }
    cout << "--------------------" << endl;
    set<string> b; //associative container
    b.insert("Monday");
    b.insert("Tuesday");
    b.insert("Wednesday");
    b.insert("Thursday");
    b.insert("Friday");
    b.insert("Monday");
    //in c++ a container commonly defines iterator as nested class
    //and this class includes support fpr !=, ++ and * operators, it
    //also provides begin() and end() member functions to return
    //the iterator to first element and element after the last
    cout << "All strings in the set" << endl;
    for(set<string>::iterator i = b.begin(); i != b.end(); ++i)
    {
        cout << *i << endl;
    }
}