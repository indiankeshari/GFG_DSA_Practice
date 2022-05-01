#include <bits/stdc++.h>
using namespace std;

void generateSubset(string s, string curr = " ", int i = 0)
{
    if (i == s.length())
    {
        cout << curr;
        return;
    }
    generateSubset(s, curr, i + 1);
    generateSubset(s, curr + s[i], i + 1);
}

int main()
{
    string arr;
    cin >> arr;
    generateSubset(arr);

    return 0;
}