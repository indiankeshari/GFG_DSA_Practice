// Easy (2 Points)
/*
? Question:
? Given a number N and a bit number K, check if Kth bit of N is
? set or not. A bit is called set if it is 1. Position of set
? bit '1' should be indexed starting with 0 from LSB side in
? binary representation of the number.

@ Your task:
@ You don't have to read input or print anything.
@ Your task is to complete the function checkKthbit
@ that takes n and k as parameters and returns either
@ true (if kth bit is set) or false(if kth bit is not set).

@ Expected Time Complexity: O(LogN).
@ Expected Auxiliary Space: O(1).

@ Constraints:
@ 1 ≤ N ≤ 109
@ 0 ≤ K ≤ floor(log2(N) + 1)

B^ Example 1:
B^ Input: N = 4, K = 0
B^ Output: No
B^ Explanation: Binary representation of 4 is 100,
B^ in which 0th bit from LSB is not set.
B^ So, return false.


B^ Example 2:
B^ Input: N = 4, K = 2
B^ Output: Yes
B^ Explanation: Binary representation of 4 is 100,
B^ in which 2nd bit from LSB is set.
B^ So, return true.


B^ Example 3:
B^ Input: N = 500, K = 3
B^ Output: No
B^ Explanation: Binary representation of 500 is
B^ 111110100, in which 3rd bit from LSB is not set.
B^ So, return false.
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
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        //! Your code here
        // It can be a one liner logic!! Think of it!!
        return (n & (1 << k));
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t; // taking testcases
    while (t--)
    {
        long long n;
        cin >> n; // input n
        int k;
        cin >> k; // bit number k
        Solution obj;
        if (obj.checkKthBit(n, k))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
} // } Driver Code Ends