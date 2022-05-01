#include <iostream>
#include <cmath>
using namespace std;

void TOH(int n, char A, char B, char C)
{
    static int count = 0;
    if (n == 1)
    {
        cout << ++count << " Move 1 from " << A << " to " << C << endl;
        return;
    }
    TOH(n - 1, A, C, B);

    cout << ++count << " Move " << n << " from " << A << " to " << C << endl;

    TOH(n - 1, B, A, C);
}

int main()
{
    int NumberOfDisk;
    char a = 'A', b = 'B', c = 'C';
    cin >> NumberOfDisk;
    TOH(NumberOfDisk, a, b, c);
    cout << "Total Number of Steps = " << pow(2, NumberOfDisk) - 1 << endl;

    return 0;
}