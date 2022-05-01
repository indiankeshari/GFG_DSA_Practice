// *Time complexity of fun2 = ⊖(n)
#include <iostream>
using namespace std;

int fun2(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << fun2(n) << endl;
}