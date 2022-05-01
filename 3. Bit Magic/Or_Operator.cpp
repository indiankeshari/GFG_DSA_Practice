#include <iostream>
using namespace std;

int OrValue(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << OrValue(a, b) << endl;

    return 0;
}

int OrValue(int a, int b)
{
    return (a | b);
    /*
    e.g;
    1.
        a=4,b=5
        a|b =
              100
             |101
             =101
             which is binary representation of 5
    e.g;
    2.
        a=3,b=4
        a|b =
             011
            |100
            =111
            which is binary representation of 7
    */
}
