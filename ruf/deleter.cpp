#include <bits/stdc++.h>
using namespace std;

#define PI 3.141592653
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
#define rep(i, a) for (int i = 0; i < int(a); i++)
#define trvi(c, it) for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define trvii(c, it) for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define trmsi(c, it) for (msi::iterator it = (c).begin(); it != (c).end(); it++)
#define INF 2000000000     // 2 billion
#define MEMSET_INF 127     // about 2B
#define MEMSET_HALF_INF 63 // about 1B

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1 || b == 1)
            cout << -1;
        else if (gcd(a, b) == 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}