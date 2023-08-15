#include <iostream>

using namespace std;

void search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "The element is present in the array at the index " << i << endl;
            return;
        }
    }
    cout << "The element is not present in the array" << endl;
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

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    search(arr, n, key);

    return 0;
}
