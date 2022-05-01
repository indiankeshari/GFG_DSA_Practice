#include <iostream>
using namespace std;

int Josephus(int n, int k)
{
    if (n == 1)
        return 0;
    return ((Josephus((n - 1), k) + k) % n);
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << "The Only Person Left = " << Josephus(n, k) << endl; //*When First Person in 0.
    // cout << "The Only Person Left = " << Josephus(n, k) + 1 << endl;//* When First Person is 1

    return 0;
}