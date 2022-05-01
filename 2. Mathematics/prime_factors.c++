#include <iostream>
using namespace std;

// bool isPrime(int n)
// {
//     if (n < 2)
//         return false;
//     if (n == 2 || n == 3)
//         return true;
//     if (n % 2 == 0 || n % 3 == 0)
//         return false;
//     for (int i = 5; i * i <= n; i = i + 6)
//     {
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }
// void printPrimeFactors(int n)
// {
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0 && isPrime(i))
//         {
//             cout << i << " ";
//             n /= i;
//             i = 1;
//         }
//     }
//     if (n > 0)
//         cout << n << " " << endl;
// }
void printPrimeFactors(int n)
{
    if (n < 2)
        cout << -1 << endl;
    else if (n == 2 || n == 3)
        cout << n << endl;
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n /= 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << " ";
        n /= 3;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i << " ";
            n = n / (i + 2);
        }
    }
    if (n > 3)
        cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    printPrimeFactors(n);
    return 0;
}