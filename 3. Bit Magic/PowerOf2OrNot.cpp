#include <iostream>
using namespace std;

bool isPow2(int a);

int main()
{
    int a;
    cin >> a;
    if (isPow2(a) == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

bool isPow2(int a)
{
    // if (a == 0)
    //     return 0;
    // return ((a & (a - 1)) == 0);
    return ((a != 0) && (a & (a - 1)) == 0);
}