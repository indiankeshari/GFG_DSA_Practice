//* when  Recursion is used in the last of function.
//* means nothing else is done after function call

#include <iostream>
using namespace std;

int factorial(int n, int k = 1)
{
    if (n == 0 || n == 1)
        return k;

    return factorial(n - 1, k * n); //* It is tail recursive function
    // return (n * factorial(n - 1)); //* It is not tail recursive function
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
}

// #include <iostream>
// using namespace std;

// void fun(int n, int k)
// {
//     if (n == 0)
//         return;

//     cout << k << " ";

//     fun(n - 1, k + 1);
// }

// int main()
// {

//     fun(8, 1);
// }

// #include <iostream>
// using namespace std;

// void tail(int n)
// {
//     if (n == 0)
//         return;
//     cout << n << " ";
//     tail(n - 1);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     tail(n);

//     return 0;
// }