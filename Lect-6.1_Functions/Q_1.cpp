//Write a program to add 2 numbers using functions.
#include<bits/stdc++.h>
using namespace std;

int add(int num1, int num2)
{
    int sum = num1 + num2;

    return sum;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Sum of the two number: "<<add(a,b)<<endl;

    return 0;
}