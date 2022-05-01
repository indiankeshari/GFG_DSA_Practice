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

int MaxPiece(int n, int a, int b, int c)
{
    if (n < 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max(max(MaxPiece(n - a, a, b, c), MaxPiece(n - b, a, b, c)), MaxPiece(n - c, a, b, c));
    if (res == -1)
        return -1;
    else
        return res + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << "Maximum Pices = " << MaxPiece(n, a, b, c) << endl;

    return 0;
}