#include<iostream>
#include<vector>
using namespace std;
bool func(int arr[],vector<int> v,int ind,int n,int sum,int target){

    if(ind == n){
        if(sum == target){
        for(auto i:v){
            cout<<i<<" ";
        }cout<<endl;
        return true;
        }
        return false;
    }

    // take
    v.push_back(arr[ind]);
    sum += arr[ind];
    if(func(arr,v,ind+1,n,sum,target)) return true;
    sum -= arr[ind];
    v.pop_back();

    // nottake
    if(func(arr,v,ind+1,n,sum,target)) return true;

    return false;
}
int main(){

int arr[] = {1,2,1};
vector<int> v;
func(arr,v,0,3,0,2);
    return 0;
}