#include <bits/stdc++.h>
using namespace std;

long long int primeSum(long long int a, long long int b)
{
    if (a == 1 || b == 1)
        return -1;
    else if (__gcd(a, b) == 1)
        return 1;
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        cout << primeSum(x, y) << endl;
    }

    return 0;
}