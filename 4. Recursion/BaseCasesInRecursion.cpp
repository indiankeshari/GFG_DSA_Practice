// #include <stdio.h>
#include <iostream>
using namespace std;

int fact(int n, int k = 1)
{
    if (n < 2) // This Condition is known as Base Cases (This condition helps to stop the recursion);
        return k;

    return (fact((n - 1), (k * n)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    printf("Enter the value of N \n");
    int n;
    scanf("%d", &n);
    printf("%d\n", fact(n));

    return 0;
}