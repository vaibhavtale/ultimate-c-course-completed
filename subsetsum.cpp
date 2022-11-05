#include<iostream>
#include<vector>
using namespace std;

void func(int arr[],int ind,int sum,int n){

    if(ind == n){
        cout<<sum<<endl;
        return;
    }

    // take element

    func(arr,ind+1,sum+arr[ind],n);

    // dont take

    func(arr,ind+1,sum,n);
}

int main(){

    int arr[] = {1,2,3};
   
func(arr,0,0,3);

    return 0;
}