/*
1234
1234
1234
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter rows:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}