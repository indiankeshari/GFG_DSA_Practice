//? program to find Highest Common Factor(HCF) or Greatest Common Divisor (GCD)

#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b) << endl;

    return 0;
}

int GCD(int a, int b)
{
    //* Optimised Euclidean Algorithm Code
    static int count = 0;
    cout << ++count << " ";
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
////int GCD(int a, int b)
////{
//////* Euclidean Algorithm Code
////    int count = 0;
////    while (a != b)
////    {
////        cout << ++count << " ";
////        if (a > b)
////            a = a - b;
////        else
////            b = b - a;
////    }
////    cout << "\n";
////    return a;
////}

////// int GCD(int a, int b)
////// {
////////* Naive Solution
//////     int res = min(a, b);
//////     int count = 0;
//////     while (res)
//////     {
//////         cout << ++count << " ";
//////         if (a % res == 0 && b % res == 0)
//////             break;
//////         res--;
//////     }
//////     cout << "\n";
//////     return res;
////// }

////////int GCD(int a, int b)
////////{
//////////* Aman Algorithm code (Better than all of the above)
////////    int s = min(a, b), l = max(a, b), r = l % s;
////////    int count = 0;
////////    while (r)
////////    {
////////        cout << ++count << " ";
////////        r = l % s;
////////        if (r)
////////        {
////////            l = s;
////////            s = r;
////////        }
////////        else if (r == 0)
////////            cout << endl;
////////    }
////////    return s;
////////}