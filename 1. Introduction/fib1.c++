/*
 * Program to find value on nth index of fibbonacci series
 * Time complexity of fib1() = ⊖(2^n)
 * Space complexity of fib1() = ⊖(n)
 * Auxiliary space of fib1() = ⊖(n)
 */
#include <iostream>
using namespace std;

int fib1(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib1(n - 1) + fib1(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << fib1(n) << endl;
    return 0;
}