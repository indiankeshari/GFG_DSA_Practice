#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, num, sum = 0;
        cin >> n;
        cin >> num;
        int arr[n];
        // for (int i = 0; i < n; i++)
        //     cin >> arr[i];
        for (int i = 0; i < n; i++)
            sum = sum ^ arr[i];
        cout << sum << "Line Changed" << endl;
    }

    return 0;
}