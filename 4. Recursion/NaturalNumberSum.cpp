#include <iostream>
using namespace std;

unsigned int sum(int n)
{
    if (n == 0)
        return 0;
    return (n + sum(n - 1));
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;

    return 0;
}