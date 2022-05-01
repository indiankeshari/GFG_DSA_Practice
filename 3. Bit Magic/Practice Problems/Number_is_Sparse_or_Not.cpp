// Basic (1 Point)
/*
? Question:
? Given a number N. The task is to check whether it
? is sparse or not. A number is said to be a sparse number
? if no two or more consecutive bits are set in the binary
? representation.

@ Your Task: The task is to complete the function checkSparse()
@ that takes n as a parameter and returns 1 if the number is
@ sparse else returns 0.


@ Expected Time Complexity: O(log N).
@ Expected Auxiliary Space: O(1).

@ Constraints:
@ 1 <= N <= 106

B^ Example 1:
B^ Input: N = 2
B^ Output: 1
B^ Explanation: Binary Representation of 2 is 10,
B^ which is not having consecutive set bits.
B^ So, it is sparse number.


B^ Example 2:
B^ Input: N = 3
B^ Output: 0
B^ Explanation: Binary Representation of 3 is 11,
B^ which is having consecutive set bits in it.
B^ So, it is not a sparse number.
*/

// { Driver Code Starts
// Initial Template for C++

// C++ program to check if n is sparse or not
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#include <bits/stdc++.h>
class Solution
{
public:
    // Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        //! Your code
        // for(int i=0;i<=floor(log2(n))+1;i++)
        // {
        //     if(((1&(n>>i))==1)&&(1&(n>>(i+1)))==1)
        //     return 0;
        // }
        if ((n & (n >> 1)) == 0)
            return 1;
        return 0;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t, n;

    // testcases
    cin >> t;
    while (t--)
    {
        // initializing n
        cin >> n;

        // printing 1 if isSparse() returns true
        // else 0
        Solution ob;
        if (ob.isSparse(n))
        {
            cout << "1" << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}
// } Driver Code Ends