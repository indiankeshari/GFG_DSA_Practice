#include <iostream>
using namespace std;

void SumSubset(int n, int *arr, int sum)
{
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == sum)
    //             cout << "( " << arr[i] << ", " << arr[j] << " )" << endl;
    //     }
    // }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int sum;
        cin >> sum;
        SumSubset(n, arr, sum);
    }

    return 0;
}