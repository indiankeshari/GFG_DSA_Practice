// Easy (2 Points)
/*
? Question:
? Given an unsigned integer N. The task is to swap all odd bits
? with even bits. For example, if the given number is 23 (00010111),
? it should be converted to 43(00101011). Here, every even position
? bit is swapped with adjacent bit on the right side(even position
? bits are highlighted in the binary representation of 23), and
? every odd position bit is swapped with an adjacent on the left
? side.

@ Your Task: Your task is to complete the function swapBits() which takes
@ an integer and returns an integer with all the odd and even bits swapped.


@ Expected Time Complexity: O(1).
@ Expected Auxiliary Space: O(1).

@ Constraints:
@ 1 ≤ N ≤ 109

B^ Example 1:
B^ Input: N = 23
B^ Output: 43
B^ Explanation:
B^ Binary representation of the given number
B^ is 00010111 after swapping
B^ 00101011 = 43 in decimal.


B^ Example 2:
B^ Input: N = 2
B^ Output: 1
B^ Explanation:
B^ Binary representation of the given number
B^ is 10 after swapping 01 = 1 in decimal.
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
    // Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
        //! Your code here
        int o = 0x55555555;
        int e = 0xAAAAAAAA;
        int odd = o & n;
        int even = e & n;
        return (odd << 1 | even >> 1);
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
        unsigned int n;
        cin >> n; // input n

        Solution ob;
        // calling swapBits() method
        cout << ob.swapBits(n) << endl;
    }
    return 0;
} // } Driver Code Ends