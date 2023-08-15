#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter no: ";
    cin >> n;
    while (n)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;
    return 0;
}