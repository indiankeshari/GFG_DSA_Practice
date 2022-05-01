// Easy (2 Points)
/*
? Question:
? Given two numbers M and N. The task is to find the position of
? the rightmost different bit in the binary representation of
? numbers.

@ Your Task:
@ The task is to complete the function posOfRightMostDiffBit()
@ which takes two arguments m and n and returns the position of
@ first different bits in m and n. If both m and n are the same
@ then return -1 in this case.

@ Expected Time Complexity: O(max(log m, log n)).
@ Expected Auxiliary Space: O(1).

@ Constraints:
@ 0 <= M <= 109
@ 0 <= N <= 109

B^ Example 1:
B^ Input: M = 11, N = 9
B^ Output: 2
B^ Explanation: Binary representation of the given
B^ numbers are: 1011 and 1001,
B^ 2nd bit from right is different.


B^ Example 2:
B^ Input: M = 52, N = 4
B^ Output: 5
B^ Explanation: Binary representation of the given
B^ numbers are: 110100 and 0100,
B^ 5th-bit from right is different.
*/

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int pos = -1;

        int maxi = max(m, n);
        int mini = min(m, n);
        for (int i = 0; i < floor(log2(maxi)) + 1; i++)
        {
            if ((1 & (n >> i)) != (1 & (m >> i)))
                return (i + 1);
        }
        return pos;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t; // input number of testcases
    while (t--)
    {
        int m, n;
        cin >> m >> n; // input m and n
        Solution ob;
        cout << ob.posOfRightMostDiffBit(m, n) << endl;
    }
    return 0;
} // } Driver Code Ends