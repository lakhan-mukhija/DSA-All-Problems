#include <iostream>
#include <cmath>

using namespace std;

int prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter no: ";
    cin >> n;

    prime(n) ? cout << "Prime no" : cout << "Not a prime no";

    return 0;
}