#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    int i = 2;

    while (i < num)
    {
        if (num % i == 0)
        {
            cout << "Not Prime for " << i << endl;
        }
        else
        {
            cout << "Prime for " << i << endl;
        }
        i = i + 1;
    }
}