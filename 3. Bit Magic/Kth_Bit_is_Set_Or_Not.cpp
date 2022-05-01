// a bit is set means that bit is 1
// a bit is not set means that bit is 0
#include <iostream>
using namespace std;

bool KthBitLeftShiftMethod(int n, int k);
bool KthBitRightShiftMethod(int n, int k);

int main()
{
    int n, k;
    cin >> n >> k;
    if (KthBitLeftShiftMethod(n, k) == 1)
        cout << "YES (By Left Shift Method)" << endl;
    else
        cout << "NO (By Left Shift Method)" << endl;

    if (KthBitRightShiftMethod(n, k) == 1)
        cout << "YES (By Right Shift Method)" << endl;
    else
        cout << "NO (By Right Shift Method)" << endl;

    return 0;
}

bool KthBitLeftShiftMethod(int n, int k)
{
    //* This is Left Shift Method
    // Right Shift Method is Written Below this Function
    return (n & (1 << (k - 1)));

    /*
    considering 32 bit representation
    e.g;
    1.
        int a=5,k=3,andOfBoth,shiftedOne
        binary of a and 1 are respectively as:
         a = 000000...00101
             000000...00001 (binary representation of 1)

             000000...0100 after right shifting binary of 1 to k-1, it will be
            &000000...0101 (binary of 5)
            =000000...0100 (after doing and of both of the above)
            shiftedOne = 000000...0100;
            andOfBoth =  000000...0100;
            if(shiftedOne == andOfBoth)
            returning true;
            else if(shiftedOne != andOfBoth)
            returning false;
            So, Output will be TRUE (YES)

    2.
        int a=5,k=2,andOfBoth,shiftedOne
        binary of a and 1 are respectively as:
         a = 000000...00101
             000000...00001 (binary representation of 1)

             000000...0010 after right shifting binary of 1 to k-1, it will be
            &000000...0101 (binary of 5)
            =000000...0000 (after doing and of both of the above)
            shiftedOne = 000000...0010;
            andOfBoth =  000000...0000;
            if(shiftedOne == andOfBoth)
            returning true;
            else if(shiftedOne != andOfBoth)
            returning false;
            So, Output will be FALSE (NO);
    */
}

bool KthBitRightShiftMethod(int n, int k)
{
    //* This is Right Shift Method
    // Left Shift Method is Written Above this Function
    return ((n >> (k - 1)) & 1);

    /*
    considering 32 bit representation
    e.g;
    1.
        int a=13,k=3,andOfBoth,shifted_a
        binary of a and 1 are respectively as:
         a = 000000...01101
             000000...00001 (binary representation of 1)

             000000...00001 (binary representation of 1)
//*         &000000...00011 (binary of "a" after Right shifting k-1)
            =000000...00001 (after doing and of both of the above)
            shifted_a = 000000...00011;
            andOfBoth = 000000...00001;
            if(Binary of 1 == andOfBoth)
            returning true;
            else if(Binary of 1 != andOfBoth)
            returning false;
            So, Output will be TRUE (YES)

    2.
        int a=13,k=2,andOfBoth,shifted_a
        binary of a and 1 are respectively as:
         a = 000000...01101
             000000...00001 (binary representation of 1)

             000000...00001 (binary representation of 1)
//*         &000000...00110 (binary of "a" after Right shifting k-1)
            =000000...00000 (after doing and of both of the above)
            shifted_a = 000000...00110;
            andOfBoth = 000000...00000;
            if(Binary of 1 == andOfBoth)
            returning true;
            else if(Binary of 1 != andOfBoth)
            returning false;
            So, Output will be FALSE (NO)

    */
}