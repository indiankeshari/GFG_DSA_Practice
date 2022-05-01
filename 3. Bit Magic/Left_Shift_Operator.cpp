// It gives floor value of a*(2^b). Means it is Multiplying a by 2 for b times
//! Left Shift Opratation is not recomanded for negative numbers, because it may be undefined or wrong answer
#include <iostream>
using namespace std;

int LeftShift(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << LeftShift(a, b) << endl;

    return 0;
}

int LeftShift(int a, int b)
{
    return (a << b);
    /*
    example; (Let's explain for 8 bits, but remember it only assumption. actual size is 32 bits or 64 bits)
    1.
        a=5,b=3
         a = 00000101
         after shifting b=3 bits left it's binary representation will be
         00101000. And it is binary representation of 40.

    2.
    a=4,b=1
      a = 00000100
      a<<1= 00001000
      whose bianry repesation is 8

    */
}