#include <iostream>

using namespace std;

void altswap(int arr[], int n)
{
    for (int i = 0; i < n - 1; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr[100];

    int n;
    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array's elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    altswap(arr, n);

    cout << "The array after swapping alternate elements is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}