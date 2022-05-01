#include <iostream>
using namespace std;

int AndValue(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << AndValue(a, b) << endl;

    return 0;
}

int AndValue(int a, int b)
{
    return (a & b);
    /*
    e.g;
    1.
    a=4,b=5
    a&b =
          100
         &110
         =100
         and 100 is binary representation of 4

    e.g;
    2.
    a=3,b=4
    a&b =
         011
        &100
        =000
         which is binary representation of 0
    */
}
