#include <iostream>
using namespace std;

// bool isPrime(int n)
// {
//     if (n < 2)
//         return 0;
//     if (n == 2)
//         return 1;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "divisible by " << i << endl;
//             return 0;
//         }
//     }
//     return 1;
// }
bool isPrime(int n)
{
    //* More Efficient Code
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    } 
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
        cout << "Prime\n";
    else
        cout << "Not Prime\n";
    return 0;
}