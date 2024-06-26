// Medium (4 Points)
/*
? Question:
? Given an array arr[] of N positive elements. The task is to find the
? Maximum AND Value generated by any pair(arri, arrj) from the array
? such that i != j.
? Note: AND is bitwise '&' operator.

@ Your Task:
@ You don't need to read input or print anything. Your task is
@ to complete the function maxAND() which takes the array elements
@ and N (size of the array) as input parameters and returns the
@ maximum AND value generated by any pair in the array.

@ Expected Time Complexity: O(N * log M), where M is the maximum
@ element of the array.
@ Expected Auxiliary Space: O(1).

@ Constraints:
@ 1 <= N <= 105
@ 1 <= arr[i] <= 105

B^ Example 1:
B^ Input:
B^ N = 4
B^ arr[] = {4, 8, 12, 16}
B^ Output: 8
B^ Explanation:
B^ Pair (8,12) has the Maximum AND Value 8.


B^ Example 2:
B^ Input:
B^ N = 4
B^ arr[] = {4, 8, 16, 2}
B^ Output: 0
B^ Explanation: Any two pairs of the array has
B^ Maximum AND Value 0.
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
    // Function for finding maximum AND value.
    int maxAND(int arr[], int N)
    {
        //! Your code here
        int mx = *max_element(arr, arr + N);
        int len = log2(mx) + 1, ans = 0;
        for (int i = len; i >= 0; i--)
        {
            int curr = ans | (1 << i), cnt = 0;
            for (int j = 0; j < N; j++)
            {
                if ((curr & arr[j]) == curr)
                    cnt += 1;
                if (cnt == 2)
                    break;
            }
            if (cnt == 2)
                ans = curr;
        }
        return ans;
    }
};

// { Driver Code Starts.

// Driver function
int main()
{
    int t;
    cin >> t; // testcases
    while (t--)
    {
        int n;
        cin >> n; // input n
        int arr[n + 5], i;

        // inserting elements
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        // calling maxAND() function
        cout << obj.maxAND(arr, n) << endl;
    }
    return 0;
} // } Driver Code Ends