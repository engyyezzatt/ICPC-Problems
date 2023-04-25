#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string firstName1, lastName1, firstName2, lastName2;
    cin >> firstName1 >> lastName1 >> firstName2 >> lastName2;

    if(lastName1 == lastName2)
    {
        cout << "ARE Brothers";
    }

    else{
        cout << "NOT";
    }

}