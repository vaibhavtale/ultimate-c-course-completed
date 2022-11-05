#include<iostream>
using namespace std;

int coin_change(int arr[],int n,int x){

    if(x == 0){

        return 1;
    }

    if(x < 0){

        return 0;
    }

    return coin_change(arr,n,x-arr[n-1]) + coin_change(arr,n-1,x);
}

int main(){

    
    int x,n;
    cin>>x;
    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    cout<<coin_change(arr,n,x)<<endl;

    return 0;
}