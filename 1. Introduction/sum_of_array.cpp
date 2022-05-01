// *Time complexity of arrSum() = ⊖(n)
// *Space complexity of arrSum() = ⊖(n)
// *Auxiliary Space of arrSum() = ⊖(1)
#include <iostream>
using namespace std;

int arrSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << arrSum(arr, n) << endl;
    // * cout << arrSum(&arr[0], n) << endl;

    return 0;
}