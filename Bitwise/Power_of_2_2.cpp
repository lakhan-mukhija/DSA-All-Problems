#include <iostream>

using namespace std;

int power(int n)
{
    if (n == 1)
        return true;
    if (n == 0)
        return false;
    while (n)
    {
        if (n % 2)
            return false;
        n = n / 2;
        if (n == 1)
            return true;
    }
}

int main()
{
    int n;
    cout << "Enter no: ";
    cin >> n;
    power(n) ? cout << "True" : cout << "False";
    return 0;
}