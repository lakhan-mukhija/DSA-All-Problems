#include <iostream>

using namespace std;

void duplicate(int arr[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = x ^ arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        x = x ^ i;
    }
    cout << x << " is the duplicate element";
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

    duplicate(arr, n);

    return 0;
}