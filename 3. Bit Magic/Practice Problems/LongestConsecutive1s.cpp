// Easy (2 Points)
/*
? Question:
? Given a number N. Find the length of the longest
? consecutive 1s in its binary representation.

@ Your Task:
@ You don't need to read input or print anything.
@ Your task is to complete the function maxConsecutiveOnes()
@ which returns the length of the longest consecutive 1s in
@ the binary representation of given N.

@ Expected Time Complexity: O(log N).
@ Expected Auxiliary Space: O(1).

@ Constraints:
@ 1 <= N <= 106

B^ Example 1:
B^ Input: N = 14
B^ Output: 3
B^ Explanation:
B^ Binary representation of 14 is
B^ 1110, in which 111 is the longest
B^ consecutive set bits of length is 3.


B^ Example 2:
B^ Input: N = 222
B^ Output: 4
B^ Explanation:
B^ Binary representation of 222 is
B^ 11011110, in which 1111 is the
B^ longest consecutive set bits of length 4.
*/

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

/*  Function to calculate the longest consecutive ones
 *   N: given input to calculate the longest consecutive ones
 */
class Solution
{
public:
    int maxConsecutiveOnes(int N)
    {
        //! code here
        int count = 0, maxLength = 0;
        for (int i = 0; i < floor(log2(N)) + 2; i++)
        {
            if ((1 & (N >> i)) == 1)
            {
                count++;
            }
            else
            {
                if (count > maxLength)
                    maxLength = count;
                count = 0;
            }
        }
        if (maxLength == 0)
            return count;
        return maxLength;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t; // testcases
    while (t--)
    {
        int n;
        cin >> n; // input n
        Solution obj;
        // calling maxConsecutiveOnes() function
        cout << obj.maxConsecutiveOnes(n) << endl;
    }
    return 0;
} // } Driver Code Ends