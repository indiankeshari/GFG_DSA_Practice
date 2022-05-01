#include <iostream>
using namespace std;

unsigned long long int nth(int n)
{
    if (n < 2)
        return n;
    cout << (nth(n - 1) + nth(n - 2));
    return 0;
}

void fib(unsigned long long int n)
{
    unsigned long long int a = 0, b = 1, c;
    cout << "0 1 ";
    while (n > 1)
    {
        c = a + b;
        cout << c << " ";
        n--;
        a = b;
        b = c;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    // fib(n);
    nth(n);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define PI 3.141592653
// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int, int> ii;
// typedef vector<ii> vii;
// typedef set<int> si;
// typedef map<string, int> msi;
// #define rep(i, a) for (int i = 0; i < int(a); i++)
// #define trvi(c, it) for (vi::iterator it = (c).begin(); it != (c).end(); it++)
// #define trvii(c, it) for (vii::iterator it = (c).begin(); it != (c).end(); it++)
// #define trmsi(c, it) for (msi::iterator it = (c).begin(); it != (c).end(); it++)
// #define INF 2000000000     // 2 billion
// #define MEMSET_INF 127     // about 2B
// #define MEMSET_HALF_INF 63 // about 1B

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n = 6, temp1, temp2;
//     // cin >> n;
//     int arr[n] = {3, 5, 2, 7};
//     // 3 1 5 4 7 0
//     //? 3 5 2 7
//     //? 1 3 5 4 2 7
//     rep(i, n)
//     {
//         if (i == 0)
//         {
//             // cout << i + 7 << endl;
//             temp1 = arr[0];
//             arr[0] = 1;
//             temp2 = temp1;
//             /*
//                3 5 2 7
//              * i = 0
//              * temp1 = 3
//              * arr[0] = 1
//              * temp2 = 3;
//              */
//         }
//         if (i == 3)
//         {
//             temp1 = arr[i];
//             arr[i] = 4;
//             temp2 = temp1;
//             /*
//              * i = 3
//              * temp1 = 7
//              * arr[i]=4
//              * temp2 = 7
//                1 3 5 4
//              */
//         }
//         else
//         {
//             temp1 = arr[i];
//             arr[i] = temp2;
//             temp2 = temp1;
//             /*
//                   1 5 2 7
//                   1 3 5 7
//                 * i = 1, 2, 4
//                 * temp1 = 5, 2,
//                 * arr[i] = 3, 5
//                 * temp2 = 5, 2
//             */
//         }
//     }
//     rep(i, n)
//             cout
//         << arr[i] << " ";

//     return 0;
// }