#include <iostream>

using namespace std;

int fact(int x)
{
    int z = 1;
    while (x)
    {
        z = z * x;
        x--;
    }
    return z;
}

void comb(int n, int r)
{
    int ans = ((fact(n)) / (fact(r) * fact(n - r)));
    cout << ans << endl;
}

int main()
{
    int n, r;
    cout << "Enter value of n and r: ";
    cin >> n >> r;

    comb(n, r);

    return 0;
}