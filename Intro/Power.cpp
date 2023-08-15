#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter values of x and y: ";
    cin >> x >> y;

    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    cout << ans;
    return 0;
}