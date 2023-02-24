#include <iostream>
using namespace std;

int main()
{
    char n;
    cout << "Enter character: ";
    cin >> n;
    if ((n > 'a') && (n < 'z'))
    {
        cout << "Entered character is lowe case." << endl;
    }
    else if ((n > 'A') && (n < 'Z'))
    {
        cout << "Entered character is upper case." << endl;
    }
    else if ((n > '1') && (n < '9'))
    {
        cout << "Entered character is a digit." << endl;
    }
    else
    {
        cout << "Entered character is a symbol." << endl;
    }
    return 0;
}
