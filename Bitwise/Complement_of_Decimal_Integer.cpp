#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter no: ";
    cin >> n;
    if (n == 0)
    {
        cout << 1;
    }
    else
    {
        int x = n, mask = 0;
        while (n)
        {
            mask = ((mask << 1) | 1);
            n = n >> 1;
        }
        cout << ((~x) & mask);
    }
    return 0;
}