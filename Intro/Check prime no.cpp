#include <iostream>
using namespace std;

int main()
{
    int n, z = 0;
    cout << "Enter no: ";
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            z++;
            break;
        }
    }
    (z) || (n <= 1) ? cout << "Not a prime no" << endl : cout << "Prime no" << endl;
    return 0;
}