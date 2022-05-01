// Basic (1 Point)
/*
? Question:
? You are given two numbers A and B. The task is to count the
? number of bits needed to be flipped to convert A to B.

@ Your Task: The task is to complete the function countBitsFlip() that
@ takes A and B as parameters and returns the count of the number of
@ bits to be flipped to convert A to B.

@ Expected Time Complexity: O(log N).
@ Expected Auxiliary Space: O(1).

@ Constraints:
@ 1 ≤ A, B ≤ 106

B^ Example 1:
B^ Input: A = 10, B = 20
B^ Output: 4
B^ Explanation:
B^ A  = 01010
B^ B  = 10100
B^ As we can see, the bits of A that need
B^ to be flipped are 01010. If we flip
B^ these bits, we get 10100, which is B.


B^ Example 2:
B^ Input: A = 20, B = 25
B^ Output: 3
B^ Explanation:
B^ A  = 10100
B^ B  = 11001
B^ As we can see, the bits of A that need
B^ to be flipped are 10100. If we flip
B^ these bits, we get 11001, which is B.
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
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b)
    {

        //! Your logic here
        int max, min, count = 0;
        if (a >= b)
        {
            max = a;
            min = b;
        }
        if (b >= a)
        {
            max = b;
            min = a;
        }
        for (int i = 0; i < floor(log2(max)) + 1; i++)
        {
            if ((1 & (a >> i)) != (1 & (b >> i)))
                count++;
        }
        return count;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;   // input the testcases
    while (t--) // while testcases exist
    {
        int a, b;
        cin >> a >> b; // input a and b

        Solution ob;
        cout << ob.countBitsFlip(a, b) << endl;
    }
    return 0;
} // } Driver Code Ends