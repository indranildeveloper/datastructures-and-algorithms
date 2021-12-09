#include <iostream>
using namespace std;

int main()
{
    char mychar;
    cout << "Enter anything: ";
    cin >> mychar;

    if (mychar >= 'a' && mychar <= 'z')
    {
        cout << "This is lowercase!";
    }
    if (mychar >= 'A' && mychar <= 'Z')
    {
        cout << "This is uppercase!";
    }
    if (mychar >= '0' && mychar <= '9')
    {
        cout << "This is number!";
    }
}