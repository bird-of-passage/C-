#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
