#include <iostream>
using namespace std;

void Divisors(int n)
{
    int i;
    for (i = 1; i * i <= n; i++)
        if (n % i == 0)
            cout << i << " ";

    for (; i >= 1; i--)
        if (n % i == 0 && (i * i) != n)
            cout << (n / i) << " ";
}

int main()
{
    int n;
    cin >> n;
    Divisors(n);
    return 0;
}