#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2, num3, min_, max_;
    cin >> num1 >> num2 >> num3;

    min_ = min(num1, min(num2, num3));
    max_ = max(num1, max(num2, num3));

    cout << min_ << " " << max_ << endl;



}