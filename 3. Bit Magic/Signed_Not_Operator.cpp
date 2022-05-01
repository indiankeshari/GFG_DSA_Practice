//! Not Operatation is not recomanded for negative numbers, because it may give unexpected result.
/* //* In Signed Bits Representation, if leading(first) bit
   //* is 0, it means it is a positive number.
   //* and if leading bit is 1, it means it is a negative number
*/
// If Binary representation will be 1, it will be 0 and
// if Binary representation will be 0, it will be 1.
#include <iostream>
using namespace std;

int NotValue(int a);

int main()
{
    int a;
    cin >> a;
    cout << NotValue(a) << endl;

    return 0;
}

int NotValue(int a)
{
    return (~a);
    /*  considering 32 bit representation
        //* The range of Signed integer is -(2^31) to (2^31)-1.
        //* If the number is positive is binary representation will be
        //* first bit is 0 and then its normal binary representation.
        //* But, If the number is Negative is binary representation will be
        //* first bit is 1 and then twos(2) complement of it's binary representation.

        example;
        1.
            a=1;
            it's binary will be 0000000...00001
            and it's Not(~) Value will be 1111111...11110
            which is equal to ((2^32) -1 -1) = ((2^32) - 2)
            so, ((2^32) - 2) is in the form of ((2^n) - x)
            so, the final output will be -x.
            here. -x = -2;
            output = -2
        2.
            a=5;
            it's binary represation will be 0000000...00101
            and it's Not(~) Value will be 1111111...11010
            which is equal to ((2^32)-1-5) = ((2^32) - 6)
            so, ((2^32) - 6) is in the form of ((2^n) - x)
            so, the final output will be -x.
            here. -x = -6;
            output = -6
    */
}