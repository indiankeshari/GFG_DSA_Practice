#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    int s = min(a, b), l = max(a, b), r = l % s;
    int count = 0;
    while (r)
    {
        r = l % s;
        if (r)
        {
            l = s;
            s = r;
        }
    }
    return s;
}
int LCM(int a, int b)
{
    return (a * b) / gcd(a, b);
}

//? int LCM(int a, int b)
//? {
//?     int ans = max(a, b);
//?     while (1)
//?     {
//?         if (ans % a == 0 && ans % b == 0)
//?             return ans;
//?         ans++;
//?     }
//? }

int main()
{
    int a, b;
    cin >> a >> b;
    cout << LCM(a, b) << endl;

    return 0;
}