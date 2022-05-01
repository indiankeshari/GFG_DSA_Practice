// If Binary representation will be 1, it will be 0 and
// if Binary representation will be 0, it will be 1.
#include <iostream>
using namespace std;

unsigned int NotValue(unsigned int a);

int main()
{
    unsigned int a;
    cin >> a;
    cout << NotValue(a) << endl;

    return 0;
}

unsigned int NotValue(unsigned int a)
{
    return (~a);
    /*
        max Value of int in 32 bit represation is (2^23)-1 = 4294967296 - 1
        = 4294967295

        example;
        1.
            a=1;
            it's binary will be 0000000...001
            and it's Not(~) Value will be 1111111...110
            which is equal to 4294967294
        2.
            a=4294967290;
            it's binary represation will be 1111111...010
            and it's Not(~) Value will be 0000000...101
            which is equal to 5
    */
}