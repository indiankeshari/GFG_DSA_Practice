// Easy (2 Points)
/*
? Question:
? Given an integer an N. The task is to return the
? position of first set bit found from the right side in
? the binary representation of the number.

? Note: If there is no set
? bit in the integer N, then
? return 0 from the function.

@ Your Task:
@ The task is to complete the function getFirstSetBit() that
@ takes an integer n as a parameter and returns the position of
@ first set bit.

@ Expected Time Complexity: O(log N).
@ Expected Auxiliary Space: O(1).

@ Constraints:
@ 0 <= N <= 108

B^ Example 1:
B^ Input: N = 18
B^ Output: 2
B^ Explanation: Binary representation of
B^ 18 is 010010,the first set bit from the
B^ right side is at position 2.


B^ Example 2:
B^ Input: N = 12
B^ Output: 3
B^ Explanation: Binary representation
B^ of  12 is 1100, the first set bit
B^ from the right side is at position 3.

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
    // Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(unsigned int n)
    {
        // Your code here
        if (n == 0)
            return 0;
        for (unsigned int i = 1; i <= floor(log2(n) + 1); i++)
            if (((n >> (i - 1)) & 1) == 1)
                return (i);
        return 0;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin >> t; // testcases
    while (t--)
    {
        int n;
        cin >> n; // input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
    return 0;
}
// } Driver Code Ends