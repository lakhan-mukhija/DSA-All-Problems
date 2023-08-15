#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float y;
    cout << "Enter amount: ";
    cin >> y;

    int x = y;

    y = fmod(y, 1);

    switch (1)
    {
    case 1:
        cout << "100 notes required are " << x / 100 << endl;
        x = x % 100;
    case 2:
        cout << "50 notes required are " << x / 50 << endl;
        x = x % 50;
    case 3:
        cout << "20 notes required are " << x / 20 << endl;
        x = x % 20;
    case 4:
        y ? cout << "1 notes required are " << (x / 1) + 1 << endl : cout << "1 notes required are " << x / 1 << endl;
        x = x % 1;
    }
    return 0;
}