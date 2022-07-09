#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote.\n";
    }
    else
        cout << "Not eligible for voting.\n";

    return 0;
}