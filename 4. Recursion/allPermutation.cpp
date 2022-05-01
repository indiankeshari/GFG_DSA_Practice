#include <iostream>
#include <string.h>
using namespace std;

void permute(string s, long long int i = 0)
{
    if (i == s.length() - 1)
    {
        cout << s << " ";
        return;
    }
    for (long long int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        permute(s, i + 1);
        swap(s[i], s[j]);
    }
}

int main()
{
    string arr;
    cin >> arr;
    permute(arr);

    return 0;
}