#include<iostream>
#include<vector>
using namespace std;

void fun(int arr[],int n, vector<int> v,vector<bool> check){

    if(v.size() == n){

        for(auto i:v){
            cout<<i<<" ";
        }cout<<endl;
        return;
    }

    for(int i=0; i<n; i++){

        if(!check[i]){

            v.push_back(arr[i]);
            check[i] = true;
            fun(arr,n,v,check);
            v.pop_back();
            check[i] = false;
        }
    }
}

int main(){

vector<int> v;
vector<bool> check(3,false);
int arr[] = {1,2,3};

fun(arr,3,v,check);

    return 0;
}
