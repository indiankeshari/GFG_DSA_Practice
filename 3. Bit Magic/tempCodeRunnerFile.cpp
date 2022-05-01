// if ((counter & (1 << j)) != 0)
#include <bits/stdc++.h>
using namespace std;

void genereteSubset(string a)
{
    int n = a.length();
    for (int i = 0; i < pow(2, n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            // if ((i & (1 << j)) != 0)
            //     cout << a[j];
            if ((i & (i << j)) == 1)
                cout << a[j];
        }
        cout << endl;
    }
}

int main()
{
    string a;
    cin >> a;
    genereteSubset(a);

    return 0;
}