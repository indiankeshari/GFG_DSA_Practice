#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;

    fun(n / 2);

    cout << (n % 2);
}
int main()
{
    int n = 7;
    cin >> n;
    fun(n);

    return 0;
}

// #include <iostream>
// using namespace std;

// int fun(int n)
// {
//     if (n == 1)
//         return 0;
//     else
//         return 1 + fun(n / 2);
// }
// int main()
// {
//     int n = 16;
//     // cin >> n;

//     cout << fun(n);

//     return 0;
// }