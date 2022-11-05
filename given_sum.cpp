#include<iostream>
#include<vector>
using namespace std;

int func(int arr[],int ind,int n,int sum,int target ){

    if(ind == n){
        if(sum == target){
        return 1;
        }
        return 0;
    }

    // take
    int l =  func(arr,ind+1,n,sum+arr[ind],target);

    // nottake
    int r =  func(arr,ind+1,n,sum,target);
      
    return l+r;
}
int main(){
int arr[] = {1,2,1,6,3};
cout<<func(arr,0,5,0,12)<<endl;
    return 0;
}