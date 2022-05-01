// *Time complexity of fun3 = ⊖(n²)
#include <iostream>
using namespace std;

int fun3(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            sum++;
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << fun3(n) << endl;

    return 0;
}