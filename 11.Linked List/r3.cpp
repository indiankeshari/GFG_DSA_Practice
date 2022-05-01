#include <iostream>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    if (b == 0)
        cout << "infinite" << endl;
    else if (a >= 0 && b > 0)
    {
        while (a >= b)
        {
            a -= b;
            count++;
        }
    }
    else if ((a >= 0 && b < 0) || (a < 0 && b >= 0))
    {
    }
    else
        cout << count << endl;

    return 0;
}