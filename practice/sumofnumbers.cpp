#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;

    int sum = 0;
    int i = 1;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }

    cout << "The sum of the numbers from 0 to " << n << " is " << sum << endl;
}