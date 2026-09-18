#include "interval.h"
#include <iostream>
#include <string>

using namespace std;

template<typename K, typename V> 
class Binder
{
public:
    Binder(K ky) : key(ky){}

    void Bind(V val)
    {
        value = val;
    }

    void Print() const
    {
        cout << "(" << key << ") => " << value << endl;
    }
private:
    K key;
    V value;
};

template<typename K> //partial specialization of Binder class template
class Binder<K, bool>
{
public:
    Binder(K ky) : key(ky){}

    void Bind(bool val)
    {
        value = val;
    }

    void Print() const
    {
        cout << "(" << key << ") => " << (value ? "Yes" : "No") << endl;
    }
private:
    K key;
    bool value;
};

template<> //full specialization of Binder class template
class Binder<int, string>
{
public:
    Binder()
    {
        static int nid = 0;
        key = ++nid;
    }

    void Bind(string val)
    {
        value = val;
    }

    void Print() const
    {
        cout << "[" << key << "] => " << value << endl;
    }
private:
    int key;
    string value;
};

int main(void)
{
    Binder<string, Interval> a("monday");
    a.Bind(Interval(5, 40));
    a.Print();

    Binder<int, double> b(91);
    b.Bind(45.78);
    b.Print();

    Binder<string, bool> c("Happy");
    c.Bind(true);
    c.Print();

    Binder<int, string> d;
    d.Bind("April");
    d.Print();

    Binder<int, string> e;
    e.Bind("June");
    e.Print();
}
