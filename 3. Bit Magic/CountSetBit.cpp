// Counting Number of Ones(1) in the Binary Repersentation of Given Number
#include <bits/stdc++.h>
using namespace std;

int CountSetBit(int n);
int table[256];

void initialize()
{

    // To initially generate the table algorithmically:
    table[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}

int main()
{
    initialize();
    int a;
    cin >> a;
    cout << CountSetBit(a) << endl;

    return 0;
}
// int CountSetBit(int n)
// { // Method 4 (LoopUp Table Method for 32 Bit Number)
//     // Time Complexity = ⊖(1);
//     // Short form of below method 4
//     // Short form of below method 4
//     return table[n & 0xff] +
//            table[(n >> 8) & 0xff] +
//            table[(n >> 16) & 0xff] +
//            table[n >> 24];
// }
int CountSetBit(int n)
{
    // Method 4 (LoopUp Table Method for 32 Bit Number)
    // Time Complexity = ⊖(1);
    int count = table[n & 0xff];
    n = n >> 8;
    count = count + table[n & 0xff];
    n = n >> 8;
    count = count + table[n & 0xff];
    n = n >> 8;
    count = count + table[n & 0xff];
    return count;
}

// int CountSetBit(int a)
// {
//     // Method 3 (Brain Kerningam's Algorithm)
//     // Time Complexity = ⊖(Set Bit Count)
//     int count = 0;
//     while (a)
//     {
//         a = (a & (a - 1));
//         count++;
//     }

//     return count;
// }

// int CountSetBit(int a)
// {
//     // Method 2 (Naive Solution)
//      //Time complexity = ⊖(Total Bits in binary of a)
//     int count = 0;
//     while (a)
//     {
//         count += (a & 1);
//         a = a >> 1;
//         // if ((a & 1) == 1)// Can be used instead of below if condition
//         //// if (a % 2 != 0)
//         // {
//         // count++;
//         // }
//         // a /= 2;
//     }
//     return count;
// }

// int CountSetBit(int a)
// {
// Method 1 (Solution by Aman)
//     int count = 0;
//     for (int i = 1; i <= floor(log2(a)) + 1; i++)
//     {
//         if (((a >> (i - 1)) & 1) == 1)
//             count++;
//     }
//     return count;
// }