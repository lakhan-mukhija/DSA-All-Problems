#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0;
    cout << "Enter no: ";
    cin >> n;
    while (n)
    {
        int dig = n % 10;
        ans = ans * 10 + dig;
        n = n / 10;
    }
    cout << ans;
    return 0;
}