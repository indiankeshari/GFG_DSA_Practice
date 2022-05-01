// Basic (1 Point)
/*
? Question:
? Given N in Gray Code, find its binary equivalent. Return the
? decimal representation of the binary equivalent.

@ Your Task:
@ You don't need to read input or print anything. Your task
@ is to complete the function grayToBinary() which accepts an
@ integer n as an input parameter and returns decimal of the
@ binary equivalent of the given gray code.

@ Expected Time Complexity: O(log N)
@ Expected Auxiliary Space: O(1)

@ Constraints:
@ 0 <= N <= 108

B^ Example 1:
B^ Input: N = 4
B^ Output: 7
B^ Explanation:
B^ Given 4 representing gray code 110.
B^ Binary equivalent of gray code 110 is 100.
B^ Return 7 representing gray code 100.


B^ Example 2:
B^ Input: N = 15
B^ Output: 10
B^ Explanation:
B^ Given 15 representing gray code 1000.
B^ Binary equivalent of gray code 1000 is 1111.
B^ Return 10 representing gray code 1111
B^ ie binary 1010.


B^ Example 3:
B^ Input: N = 0
B^ Output: 0
B^ Explanation:
B^ Zero remains the same in all systems.
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
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {

        //! Your code here
        int res = n;
        while (n != 0)
        {
            n = n >> 1;
            res = res ^ n;
        }

        return res;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t, n;
    cin >> t; // testcases
    while (t--)
    {
        cin >> n; // initializing n

        Solution ob;
        // calling function grayToBinary()
        cout << ob.grayToBinary(n) << endl;
    }
}
// } Driver Code Ends