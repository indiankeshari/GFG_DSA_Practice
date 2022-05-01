#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    printf("Enter the value of N \n");
    int n;
    scanf("%d", &n);
    printf("%d\n", fact(n));

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// unsigned int fact(unsigned int n, unsigned int k = 1)
// {
//     if (n <= 1)
//         return k;
//     return fact(n - 1, k * n);
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     float n;
//     cin >> n;
//     if (n >= 13)
//     {
//         cout << "Sorry! We can handle it. Input should be less than 12.\n";
//         goto end;
//     }
//     if (n < 0)
//         cout << "Warning! Number is Negative";

//     else
//     {
//         if (n > floor(n))
//             cout << "considering " << n << "  as " << floor(n) << endl;
//         n = floor(n);
//         cout << "Factorial of " << n << " is " << fact(n) << endl;
//     }
// end:
//     return 0;
// }
