#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int n, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array's elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "The sum of array's elements is: " << sum;
    return 0;
}