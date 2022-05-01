// It is a variation of OddOccurringNumber question
#include <bits/stdc++.h>
using namespace std;

int MissingNumber(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << MissingNumber(arr, n) << endl;

    return 0;
}

int MissingNumber(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i <= n + 1; i++)
        res = res ^ i;
    for (int i = 0; i < n; i++)
        res = res ^ arr[i];
    return res;
}

// int MissingNumber(int arr[], int n)
// {
//     // My Algorithm
//     int count = 1;
//     sort(arr, arr + n);
//     for (int i = 0; i < n; i++)
//         if (arr[i] == count)
//             count++;
//         else
//             return count;

//     return -1;
// }

// example : 1
// input : n = 3, arr[] = {1 4 3}
// output : 2 (because in range n+1, 2 is missing)
// explaination:
// range(n+1) = 1, 2, 3,4
// in given array 2 is missing

// example : 2
// input : n = 7, arr[] = {6 1 8 7 3 2 4}
// output: 5 (because in range n+1, 5 is missing)
// explaination:
// range(n+1) = 1, 2, 3, 4, 5, 6, 7, 8
// in given array 5 is missing
