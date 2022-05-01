// If you want to do revision. Then check its lecture in the course
// because I feel little dificult to understand it
#include <iostream>
using namespace std;

void twoOddOccurring(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    twoOddOccurring(arr, n);

    return 0;
}

void twoOddOccurring(int arr[], int n)
{
    int XOR = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ arr[i];
    }
    int sum = XOR & ~(XOR - 1);
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & sum) != 0)
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i];
    }
    cout << res1 << " " << res2 << endl;
}

/*
// Two Odd Appearing Number
. Logically same as above, but written by me
#include <iostream>
using namespace std;

class soln
{
public:
    void findOddAppearing()
    {
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
    soln obj;
    obj.findOddAppearing();

    return 0;
}
*/