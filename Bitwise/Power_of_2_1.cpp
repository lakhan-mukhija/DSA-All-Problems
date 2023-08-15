#include <iostream>

using namespace std;

int main()
{
    float n;
    cout << "Enter no:";
    cin >> n;
    int ans = 1;
    while (n >= 1)
    {
        if (n == 1)
        {
            cout << "True";
            ans--;
            break;
        }
        n = n / 2;
    }
    if (ans)
    {
        cout << "False";
    }
    return 0;
}