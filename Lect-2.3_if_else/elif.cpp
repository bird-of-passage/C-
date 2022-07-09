#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x == y)
    {
        cout << "Both the numbers are equal\n";
    }
    else if (x > y)
    {
        cout << "X is greater than Y\n";
    }
    else
        cout << "Y is greater than X\n";

    return 0;
}