/*
1
23
345
4567
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
        int x = i;
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << x;
                x++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// 2nd way
//  int main()
//  {
//      int n;
//      cout<<"Enter rows:";
//      cin >> n;
//      for (int i = 1; i <= n; i++)
//      {
//          for (int j = 1; j <= i; j++)
//          {
//              cout << i + j - 1;
//          }
//          cout << endl;
//      }
//  }