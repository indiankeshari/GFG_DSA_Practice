// Two Odd Occurring Number
#include <iostream>
using namespace std;

int main()
{
    int n, xorr = 0, res1 = 0, res2 = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        xorr = xorr ^ arr[i];
    }
    int lastSetBit = ((xorr) & ~(xorr - 1));

    for (int i = 0; i < n; i++)
    {
        if ((lastSetBit & arr[i]) == 0)
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i];
    }
    cout << res1 << endl
         << res2 << endl;

    return 0;
}