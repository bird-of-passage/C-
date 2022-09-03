#include<bits/stdc++.h>
using namespace std;

#define endl "\n"


int main()
{
    int t;
    cin>>t;

    int a,b,c;
    for(int i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        int sum = a+b+c;

        
        if(sum%3==0)
        {
            cout << "Case " << i << ":"
             << " " <<"Peaceful"<<endl;
        }
        else
        {
            cout << "Case " << i << ":"
             << " " <<"Fight"<<endl;
        }
        
    }


    return 0;
}