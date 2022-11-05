#include<iostream>
#include<vector>
using namespace std;

void func(int arr[],vector<int> &v,int ind,int n, int target){
    
    if(ind == n){

        if(target == 0){
            for(auto i:v){
                cout<<i<<" ";
            }cout<<endl;
        }
        return;
    }

    // if the element at given index is smaller or equal to the target we are looking for then we'll pick it up.. target will be changed.

    // pick the element.

    if(arr[ind] <= target){

        v.push_back(arr[ind]);
        func(arr,v,ind,n,target-arr[ind]);
        v.pop_back();
    }

    // do not pick..

    func(arr,v,ind+1,n,target);

    return;

}

int main(){

int arr[] = {2,3,5};
int target = 8;

vector<int> v;

func(arr,v,0,3,8);

    return 0;
}