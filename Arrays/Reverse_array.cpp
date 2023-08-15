#include <iostream>

using namespace std;

void reverse(int arr[], int n)
{
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        if (i >= j)
        {
            break;
        }
        swap(arr[i], arr[j]);
    }
    return;
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

    reverse(arr, n);

    cout << "The array after reversing is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}