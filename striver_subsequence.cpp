#include<iostream>
#include<vector>
using namespace std;

void subseq(int arr[],vector<int> v,int index,int n){

    if(index == n){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    // take----
    v.push_back(arr[index]);
    subseq(arr,v,index+1,n);
    v.pop_back();
    // nottake
    subseq(arr,v,index+1,n);
    
}

 int main(){

vector<int> v;
int arr[] = {1,2,3};
    subseq(arr,v,0,3);
    return 0;
 }