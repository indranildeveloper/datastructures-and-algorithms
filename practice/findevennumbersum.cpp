#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;
    int i = 1;

    while (i <= num)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << "The sum of even numbers are " << sum;
}