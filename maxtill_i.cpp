#include<bits/stdc++.h>
using namespace std;

void maxtill_i(int arr[],int n){

    int currmax = INT_MIN;

    for(int i=0; i<n; i++){

        currmax = max(currmax,arr[i]);
        cout<<currmax<<" ";
    }cout<<endl;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    maxtill_i(arr,n);

    return 0;
}