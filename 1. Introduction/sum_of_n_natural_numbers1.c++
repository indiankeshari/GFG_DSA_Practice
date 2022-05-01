// *Time complexity of fun 1 = ⊖(1)
// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

int fun1(int n)
{
    return n * (n + 1) / 2;
}
int main()
{
    int n;
    cin >> n;
    cout << fun1(n);
    return 0;
}