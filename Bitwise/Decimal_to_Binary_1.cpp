#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i = 0;
    cout << "Enter no: ";
    cin >> n;
    float ans = 0;
    while (n)
    {
        int digit = n % 2;
        ans = digit * pow(10, i) + ans;
        i++;
        n = n / 2;
    }
    cout << ans;
    return 0;
}