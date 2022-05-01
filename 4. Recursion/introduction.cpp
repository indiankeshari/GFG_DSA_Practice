#include <iostream>
using namespace std;

void fun1(int n)
{
    if (n <= 0) //* These types of conditions are called base cases (or recursion turmination condition)
        return;
    cout << "GeeksForGeeks" << endl;
    fun1(n - 1);
}

int main()
{
    int n;
    cin >> n;
    fun1(n);

    return 0;
}

// #include <iostream>
// using namespace std;

// class solution
// {
// public:
//     void fun1()
//     {
//         cout << "Fun1" << endl;
//     }
//     void fun2()
//     {
//         cout << "Before Fun1" << endl;
//         fun1();
//         cout << "After Fun1" << endl;
//     }
// };

// int main()
// {
//     cout << "Before Fun2" << endl;
//     solution a;
//     a.fun2();
//     cout << "After Fun2" << endl;

//     /*
//     output :
//     .Before Fun2
//     .Before Fun1
//     .Fun1
//     .After Fun1
//     .After Fun2
//     */

//     return 0;
// }