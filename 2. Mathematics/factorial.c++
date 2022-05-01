#include <iostream>
using namespace std;

int fact(int n)
{
    //* iterative algorithm
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}
// int fact(int n)
// {
//     //*recursive algorithm
//     if (n <= 1)
//         return 1;
//     return n * fact(n - 1);
// }
int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}