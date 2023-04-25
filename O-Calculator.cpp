#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int num1 , num2;
    char ch;

    cin >> num1 >> ch>> num2;

if (ch == '+')
    {
        cout << num1 + num2 << endl;
    }

    else if (ch == '-')
    {
        cout << num1 - num2 << endl;
    }
    else if (ch == '*')
    {
        cout << num1 * num2 << endl;
    }

    else if (ch == '/')
    {
        cout << num1 / num2 << endl;
    }
}