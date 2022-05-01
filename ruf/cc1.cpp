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

int DILEMMA2(int x, int y)
{
    if (x == y)
    {
        return 0;
    }
    else if ((y / x) >= 1)
    {
        if ((y % x) == 0)
            return ((y / x) - 1);
        else
            return (y / x);
    }
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        cout << DILEMMA2(m, n) << endl;
    }

    return 0;
}