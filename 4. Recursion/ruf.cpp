/*
.Complete Solution :
.
.    if n <= 1,then return 0, because that is the destination
.
.    If arr[0] == 0 then return -1 as answer(no jumps are possible)
.
.    Now, Initialize maxrange and steps with arr[0], and jumps with
.    1(as 1 jump will be required)
.
.    Now, starting iteration from index 1,
.    the above values are updated as follows :
.    First we test whether we have reached the end of the array,
.    in that case we just need to return the jump variable
.    if (i == arr.length - 1) return jump;
.
.Next we update the maxrange.
.This is equal to the maximum of maxrange and i + arr[i]
.(the number of steps we can take from the current position).
.
.maxrange = max(maxrange, i + arr[i]);
.
.We used up a step to get to the current index,
.so steps has to be decreased.
.step--;
.
.If no more steps are remaining
.(i.e. steps=0, then we must have used a jump.
.Therefore increase jump. Since we know that it is possible to reach
.maxrange, we again initialize the steps to the number of steps to reach
.maxReach from position i.
.But before re-initializing step, we also check whether a step is
.becoming zero or negative.
.In this case, It is not possible to reach further.
.
.if (step == 0) {
.    jump++;
.    if (i >= maxReach)
.        return -1;
.    step = maxReach - i;
.}

.Print the returned value
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        //? Your code here
        int maxrange = arr[0], steps = arr[0], jumps = 0;
        if (n <= 0)
            return 0;
        if (arr[0] <= 0)
            return -1;

        for (int i = 0; i < n; ++i)
        {
            int k = 0;
            if (arr[i] <= 0)
                return -1;
            if ((arr[i] + i) >= (n - 1))
            {
                jumps++;
                break;
            }
            else
            {
                jumps++;
                for (int j = i; k <= arr[i]; j++)
                {
                    if (arr[j] == *max_element(arr + i, arr + (arr[i] + 1)))
                    {
                        i = j + 1;
                    }
                    k++;
                }
            }
        }
        return jumps;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends