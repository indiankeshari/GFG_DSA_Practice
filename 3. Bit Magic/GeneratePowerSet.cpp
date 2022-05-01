// If you want to do revision. Then check its lecture in the course
// because I feel little dificult to understand it
// Time Complexity = ⊖((2^n) * n)
#include <bits/stdc++.h>
using namespace std;

void GeneratePowerSet(string arr);

int main()
{
    string arr;
    cin >> arr;
    GeneratePowerSet(arr);

    return 0;
}

void GeneratePowerSet(string str)
{
    int n = str.length();
    int powSize = pow(2, n);
    for (int counter = 0; counter < powSize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((counter & (1 << j)) != 0)
                cout << str[j];
        }
        cout << endl;
    }
}

/*
// Power Set Using Bitwise Operator
*written by me(Aman), same logic as above but written by me
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class soln
{
public:
    void superSet()
    {
        string a;
        cin >> a;
        int n = a.length();
        for (int counter = 0; counter < (pow(2, n)); counter++)
        {
            for (int i = 0; i < n; i++)
            {
                if ((1 & (counter >> i)) == 1)
                    cout << a[i];
            }
            cout << endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    soln obj;
    obj.superSet();

    return 0;
}
*/