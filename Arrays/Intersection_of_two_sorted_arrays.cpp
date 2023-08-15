#include <iostream>
#include <climits>

using namespace std;

void intersection(int arr[], int n, int brr[], int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr[i] == brr[j])
        {
            cout << arr[i] << endl;
            i++;
            j++;
        }
        else if (arr[i] < brr[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int arr[100];
    int brr[100];

    int n;
    cout << "Enter 1st array's size: ";
    cin >> n;
    int m;
    cout << "Enter 2nd array's size: ";
    cin >> m;

    cout << "Enter 1st array's elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter 2nd array's elements: ";
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    intersection(arr, n, brr, m);

    return 0;
}