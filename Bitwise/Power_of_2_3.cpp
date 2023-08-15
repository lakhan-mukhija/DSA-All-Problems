#include <iostream>

using namespace std;

int power(int n)
{
    return (n > 0) && (!(n & n - 1));
}

int main()
{
    int n;
    cout << "Enter no: ";
    cin >> n;
    power(n) ? cout << "True" : cout << "False";
    return 0;
}