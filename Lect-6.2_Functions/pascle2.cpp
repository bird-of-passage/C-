#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial *=i;
    }
    return factorial;
}

int nCr(int n, int r){
    int ans = fact(n)/(fact(n-r)*fact(r));

    return ans;
}

int main()
{
    int n;
    cout<<"Enter number of row: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}