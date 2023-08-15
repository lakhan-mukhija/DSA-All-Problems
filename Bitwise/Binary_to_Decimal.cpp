#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i = 0;
    cout << "Enter no: ";
    cin >> n;
    int ans = 0;
    while (n)
    {
        int digit = n % 10;
        ans = digit * pow(2, i) + ans;
        i++;
        n = n / 10;
    }
    cout << ans;
    return 0;
}
