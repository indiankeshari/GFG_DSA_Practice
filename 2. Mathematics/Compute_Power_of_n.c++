#include <iostream>
using namespace std;
int Power(int n, int x);

int main()
{
    int n, x;
    cin >> n >> x;
    cout << Power(n, x) << endl;

    return 0;
}

int Power(int n, int x) // for handling large number use long long(int x,int n,int m) where m is modulo operator
{                       //*Time complexity is O(log x)
    //*Auxiliary space is O(1)
    //*Binary Exponentiations
    int res = 1;
    while (n > 0)
    {
        // if (x % 2 != 0) //below line is same as this line
        if (x & 1)
            res = res * n; // for handling large value it should be modified as res = (res*n)%m;
        n = n * n;         // for handling large value it should be modified as n=(n*n)%m;
        x = x >> 1;
        // x = x / 2; //above line is same as this line
    }
    return res;
    /*
    Dry run:
    n=4 , x=5
    res=1

    1st Iteration: res=4
                    n=16
                    x=2
    2nd Iteration:  res=4
                    n=16*16 = 256
                    x=1
    3rd Iteration:  res=4*256 = 1024
                    n=256*256 = 65536
                    x=0
    returning res = 1024
    binary representation of 5 = 1001

    5: 1  0  0  1
       4⁴ 4³ 4² 4¹
    res= 4⁴ * 4¹
    */
}
/*
int Power(int n, int x)
{
    //* Time complexity is O(log x)
    //* Auxiliary space is O(log x) , because it is a recursive function
    if (x == 0)
        return 1;

    int temp = Power(n, x / 2);

    temp = temp * temp;

    if (x % 2 == 0)
        return temp;
    else
        return temp * n;
}*/
/*
int Power(int n, int x)
{
    //*This is naive solution
    //*Time complexity is ⊖(x)
    int res = n;
    if (n == 0)
        return 1;
    if (n == 1)
        return n;
    for (int i = 1; i < x; i++)
    {
        res *= n;
    }
    return res;
}*/
/*
int Power(int n, int x)
{
    //This function has some error, but still works normally
    if (x == 0)
        return 1;
    if (x == 1)
        return n;
    if (x % 2 == 0)
        return Power(n, x / 2) * Power(n, x / 2);
    else if (x % 2 != 0)
        return Power(n, x - 1) * n;
}*/
