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
        int bit = n & 1;
        ans = bit * pow(10, i) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
    return 0;
}