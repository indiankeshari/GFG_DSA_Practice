// If Both Bits are Different it's XOR will be 1
// and If Both Bits are same it's XOR will be 0
// e.g; 1^1=0, 0^0=0,1^0=1,0^1=1
#include <iostream>
using namespace std;

int XorValue(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << XorValue(a, b) << endl;
    return 0;
}

int XorValue(int a, int b)
{
    return (a ^ b);

    /*
    e.g;
    1.
    a=4,b=5
    a^b =
          100
         ^101
         =001
         which is binary equavalent to 1
    2.
    a=10,b=4
          1010
         ^0100
         =1110
         which is binary equavalent to 14
    */
}