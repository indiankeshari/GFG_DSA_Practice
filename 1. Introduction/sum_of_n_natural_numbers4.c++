// *Time complexity of fun4() = ⊖(n)
// *Space complexity of fun4() = ⊖(n)
// *Auxiliary Space of fun4() = ⊖(n)
#include <iostream>
using namespace std;

int fun4(int n)
{
    if (n <= 0)
        return 0;
    return n + fun4(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << fun4(n) << endl;
}