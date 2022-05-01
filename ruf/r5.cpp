// Two Odd Appearing Number
#include <iostream>
using namespace std;

void twoOdd()
{
    cout << "In The Simple Function\n";
    int n, res1 = 0, res2 = 0, xorr = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        xorr = xorr ^ arr[i];
    }
    int lastSetBit = (xorr & ~(xorr - 1));
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & lastSetBit) == 0)
        {
            res1 = res1 ^ arr[i];
        }
        else
        {
            res2 = res2 ^ arr[i];
        }
    }
    cout << res1
         << endl
         << res2 << endl;
}
class soln
{
public:
    void findOddAppearing()
    {
        cout << "In The Class\n";
        int n, res1 = 0, res2 = 0, xorr = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            xorr = xorr ^ arr[i];
        int lastSetBit = (xorr) & ~(xorr - 1);
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] & lastSetBit) == 0)
                res1 = res1 ^ arr[i];
            else
                res2 = res2 ^ arr[i];
        }
        cout << res1 << endl
             << res2 << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    soln obj;
    obj.findOddAppearing();
    twoOdd();

    return 0;
}