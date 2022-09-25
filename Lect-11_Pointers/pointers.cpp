//Pointers are variables that store the address of other variables

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;

    int *aptr;
    aptr = &a;

    
    cout<<&a<<endl;
    cout<<aptr<<endl;


    return 0;
}