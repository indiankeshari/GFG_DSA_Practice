#include <iostream>
using namespace std;

bool isPal(int n)
{
    int rev = 0;
    int temp = n;
    while (temp)
    {
        int id = temp % 10;
        rev = rev * 10 + id;
        temp = temp / 10;
    }
    return rev == n;
}

int main()
{
    int n;
    cin >> n;
    if (isPal(n))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}