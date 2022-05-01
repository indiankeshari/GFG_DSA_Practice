// BASIC (1 Point)
/*
? Question:
? You are given a decimal number N. You need
? to find the gray code of the number N and
? convert it into decimal. here.

@ Your Task: The task is to complete the function
@ greyConverter() which takes n as a parameter and
@ returns it's equivalent gray code.

@ Expected Time Complexity: O(1).
@ Expected Auxiliary Space: O(1).

@ Constraints:
@ 0 <= N <= 109

B^ Example 1:
B^ Input: N = 7
B^ Output: 4
B^ Explanation: 7 is represented as 111 in
B^ binary form. The gray code of 111 is 100,
B^ in the binary form whose decimal equivalent
B^ is 4.


B^ Example 2:
B^ Input: N = 10
B^ Output: 15
B^ Explanation: 10 is represented as 1010 in
B^ binary form. The gray code of 1010 is 1111,
B^ in the binary form whose decimal equivalent
B^ is 15.


B^ Example 3:
B^ Input: N = 0
B^ Output: 0
B^ Explanation: Zero is represented as zero
B^ in binary, gray, and decimal.
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
    //  Function to find the gray code of given number n
    int greyConverter(int n)
    {

        //! Your code here
        // int m;
        // m=n>>1;
        return (n ^ (n >> 1));
        // return (n^(n/2));
    }
};

// { Driver Code Starts.

int main()
{
    int t, n;
    cin >> t; // testcases
    while (t--)
    {
        cin >> n; // input n
        Solution ob;
        // calling greyConverter() function
        cout << ob.greyConverter(n) << endl;
    }
}
// } Driver Code Ends