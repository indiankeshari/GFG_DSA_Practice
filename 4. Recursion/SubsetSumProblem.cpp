#include <iostream>
using namespace std;

int CountSubset(int arr[], int n, int sum)
{
    if (n == 0)
        return (sum == 0) ? 1 : 0;
    return CountSubset(arr, n - 1, sum) + CountSubset(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum;
    cin >> sum;
    cout << "Total Number of Subsets having Sum " << sum << " = " << CountSubset(arr, n, sum) << endl;

    return 0;
}