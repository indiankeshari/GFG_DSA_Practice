//! This program will print all prime numbers less than or equal to n
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n);
void Eratosthenes(int n);

int main()
{
    int n;
    cin >> n;
    Eratosthenes(n);
    return 0;
}

void Eratosthenes(int n)
{
    //*This is Optimised Sieve_of_Eratosthenes method (but sorter than below)
    //*Its Time complexity is O(n log log n)
    vector<bool> arr(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (arr[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j = j + i)
                arr[j] = false;
        }
    }
}

/*
void Eratosthenes(int n)
{
//*This is also Optimised Sieve_of_Eratosthenes method
//*Its Time complexity is O(n log log n)
    vector<bool> arr(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i])
        {
            for (int j = 2 * i; j <= n; j = j + i)
                arr[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i])
            cout << i << " ";
    }
}*/

/*
//*This is Sieve_of_Eratosthenes method (Not Optimised)
 void Eratosthenes(int n)
{
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
        arr[i] = 1;
    for (int i = 2; i <= n; i++)
    {
        int x = i + 1;
        if (arr[i] == 1)
        {
            cout << i << " ";
            while (x <= n)
            {
                if (x % i == 0)
                    arr[x] = 0;
                x++;
            }
        }
    }
}
*/

/*
bool isPrime(int n)
{
    if (n < 2)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}
//* This is naive solution (not optimised)
//* Time complexity of this code is O(n*n½) or O(n*sqrt(n))
void Eratosthenes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
} */
