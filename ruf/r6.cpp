// Power Set Using Bitwise Operator
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

void powerSet()
{
    cout << "In The Simple Function\n";
    string str;
    cin >> str;
    int n = str.length();
    for (int counter = 0; counter < (pow(2, n)); counter++)
    {
        for (int i = 0; i < n; i++)
        {
            if ((counter & (1 << i)) != 0)
                // if ((1 & (counter >> i)) == 1)
                cout << str[i];
        }
        cout << endl;
    }
}

class soln
{
public:
    void superSet()
    {
        cout << "In The Class\n";
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
    powerSet();

    return 0;
}