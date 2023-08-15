#include <iostream>

using namespace std;

void fact(int n)
{
    int z = 1;
    while (n)
    {
        z = z * n;
        n--;
    }
    cout << z;
}

int main()
{
    int n;
    cout << "Enter no: ";
    cin >> n;

    fact(n);

    return 0;
}