#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){  //array input part
        cin>>arr[i];
    }


    int counter = 1;        //bubble sort method
    while (counter < n-1)
    {
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1]= temp;
            }
        }
        counter++;
    }

    //array output part
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}