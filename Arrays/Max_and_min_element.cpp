#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int n;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter array values" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The max element is " << max << endl;
    cout << "The min element is " << min << endl;
}