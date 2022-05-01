#include <iostream>
using namespace std;

int oddOccurringNumber(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << oddOccurringNumber(arr, n);

    return 0;
}

int oddOccurringNumber(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
        res = res ^ arr[i];

    return res;
}