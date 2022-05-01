// Basic (1 Point)
/*
? Question:
? Given a non-negative integer N. The task is to check if
? N is a power of 2. More formally, check if N can be expressed
? as 2x for some x.

@ Your Task:Your task is to complete the function isPowerofTwo()
@ which takes n as a parameter and returns true or false by checking
@ if the given number can be represented as a power of two or not.

@ Expected Time Complexity:O(log N).
@ Expected Auxiliary Space:O(1).

@ Constraints:
@ 0 ≤ N ≤ 1018

B^ Example 1:
B^ Input: N = 1
B^ Output: YES
B^ Explanation:1 is equal to 2
B^ raised to 0 (20 = 1).


B^ Example 2:
B^ Input: N = 98
B^ Output: NO
B^ Explanation: 98 cannot be obtained
B^ by any power of 2.
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
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n)
    {

        //! Your code here
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        while (n)
        {
            if (n == 1)
                return 1;
            if (n % 2 != 0)
                return 0;
            n /= 2;
        }
        return 1;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin >> t; // testcases

    for (int i = 0; i < t; i++)
    {
        long long n; // input a number n
        cin >> n;

        Solution ob;
        if (ob.isPowerofTwo(n)) // Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
// } Driver Code Ends