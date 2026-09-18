#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//unary predicate defined as a function
bool IsOdd(int n)
{
    return n % 2;
}

//unary predicate defined as a functor - a class
//which overloads function-call operator
class InRange
{
public:
    InRange(int l, int u) : lower(l), upper(u) {}

    bool operator()(int value) const
    {
        return value > lower && value < upper;
    }
private:
    int lower, upper;
};

float Compute(int n)
{
    return 0.001 * n * n;
}

//defining binary predicate as a function
bool FractionalCompare(float first, float second)
{
    float ff = first - int(first);
    float fs = second - int(second);
    return ff < fs;
}

int main(void)
{
    vector<int> nums;
    nums.push_back(571);
    nums.push_back(632);
    nums.push_back(853);
    nums.push_back(714);
    nums.push_back(365);
    nums.push_back(236);
    nums.push_back(197);
    nums.push_back(409);
    cout << "All integers in source vector" << endl;
    for(vector<int>::iterator i = nums.begin(); i != nums.end(); ++i)
        cout << *i << endl;
    cout << "Number of odd integers = "
         << count_if(nums.begin(), nums.end(), IsOdd)
         << endl;
    cout << "Number of mid-range integers = "
         << count_if(nums.begin(), nums.end(), InRange(250, 650))
         << endl;
    cout << "----------------------------------" << endl;
    vector<float> vals(8);
    transform(nums.begin(), nums.end(), vals.begin(), Compute);
    //sort(vals.begin(), vals.end(), greater<float>());
    sort(vals.begin(), vals.end(), FractionalCompare);
    cout << "All values in target vector" << endl;
    for(vector<float>::iterator i = vals.begin(); i != vals.end(); ++i)
        cout << *i << endl;
}