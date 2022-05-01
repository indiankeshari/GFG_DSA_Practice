// Medium (4 Points)
/*
? Question:
? You are given a number N. Find the total count of
? set bits for all numbers from 1 to N(both inclusive).

@ Your Task: The task is to complete the function countSetBits()
@ that takes n as a parameter and returns the count of all bits.

@ Expected Time Complexity: O(log N).
@ Expected Auxiliary Space: O(1).

@ Constraints:
@ 1 ≤ N ≤ 108

B^ Example 1:
B^ Input: N = 4
B^ Output: 5
B^ Explanation:
B^ For numbers from 1 to 4.
B^ For 1: 0 0 1 = 1 set bits
B^ For 2: 0 1 0 = 1 set bits
B^ For 3: 0 1 1 = 2 set bits
B^ For 4: 1 0 0 = 1 set bits
B^ Therefore, the total set bits is 5.


B^ Example 2:
B^ Input: N = 17
B^ Output: 35
B^ Explanation: From numbers 1 to 17(both inclusive),
B^ the total number of set bits is 35.
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
    // n: input to count the number of set bits
    // Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        //! Your logic here
        if (n < 2)
            return n;
        int x = log2(n);
        int ans = x * pow(2, x - 1);
        ans += n - pow(2, x) + 1;
        ans += countSetBits(n - pow(2, x));
        return ans;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {
        int n;
        cin >> n; // input n
        Solution ob;
        cout << ob.countSetBits(n) << endl; // print the answer
    }
    return 0;
}
// } Driver Code Ends