#include<iostream>
using namespace std;

int setBit(int n,int pos){

    return ((n & (1<<pos)) != 0);
}

void unique(int arr[],int n){

    int xorsum = 0;

    for(int i=0; i<n; i++){

        xorsum = xorsum ^ arr[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;

    while(setbit != 1){

        setbit = xorsum & 1;
        pos++;

        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for(int i=0; i<n; i++){

        if(setBit(arr[i],pos-1)){

            newxor = newxor ^ arr[i];
        }
    }

    cout<<newxor<<" ";
    cout<<(newxor^tempxor)<<endl;
}

int main(){

    int arr[] = {2,4,6,7,4,5,6,2};
    int n = 8;

    unique(arr,n);

    return 0;
}