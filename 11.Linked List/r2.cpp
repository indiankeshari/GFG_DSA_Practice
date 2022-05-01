#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265

int main()
{
    cout << setprecision(2) << endl;
    cout << "deg\tsin\tcos" << endl;
    cout << "\a0\t" << sin(0) << "\t" << cos(0) << endl;
    cout << "30\t" << sin(30 * PI / 180) << "\t" << cos(30 * PI / 180) << endl;
    cout << "45\t" << sin(45 * PI / 180) << "\t" << cos(45 * PI / 180) << endl;
    cout << setprecision(3) << fixed << "60\t" << sin(60 * PI / 180) << "\t" << cos(60 * PI / 180) << endl;
    cout << setprecision(0) << fixed << "90\t" << sin(90 * PI / 180) << "\t" << cos(90 * PI / 180) << endl;

    return 0;
}