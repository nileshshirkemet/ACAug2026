#include <iostream>
#include <vector>
#include <ranges> //requires modern c++, compile with -std=c++20

using namespace std;

int main(void)
{
    vector<int> source = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    float scale = 1.0;

    auto selection = source
        | views::filter([](int n){ return n % 2; }) //passing lambda expression
        | views::transform([scale](int n){ return scale * n * n; }) //lambda expression that captures scale
        | views::reverse;
    
    //for-each loop
    for(float entry : selection)
    {
        cout << entry << endl;
    }
}
