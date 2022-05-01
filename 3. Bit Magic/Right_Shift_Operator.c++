// It gives floor value of a/(2^b). Means it is dividing a by 2 for b times
//! Right Shift Opratation is not recomanded for negative numbers, because it may be undefined or wrong answer
#include <iostream>
using namespace std;

int RightShift(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << RightShift(a, b);

    return 0;
}

int RightShift(int a, int b)
{
    return (a >> b);
    /*
example; (Let's explain for 8 bits, but remember it only assumption. actual size is 32 bits or 64 bits)
    1.
        a=5,b=2
         a = 00000101
         after shifting b=2 bits right it's binary representation will be
         00000001. And it is binary representation of 1.

    2.
    a=4,b=1
      a = 00000100
      a<<1= 00000010
      whose bianry repesation is 2
    */
}