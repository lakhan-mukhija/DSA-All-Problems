#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter no: ";
    cin >> n;
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n = n / 10;
    }
    cout << sum;
    return 0;
}