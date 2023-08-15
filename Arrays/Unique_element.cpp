// 2m+1 elements always - odd no size
// always an unique element present

#include <iostream>

using namespace std;

void unique(int arr[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = x ^ arr[i];
    }
    cout << x << " is the unique element, present at " << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << i << " index";
            break;
        }
    }
}

int main()
{
    int arr[100];

    int n;
    cout << "Enter array's size: ";
    cin >> n;

    cout << "Enter array's elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unique(arr, n);

    return 0;
}