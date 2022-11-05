#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];

    }
 
 priority_queue <int,vector<int>> pq;

 int count = 0;
 int sum = 0;

 for(int i=0; i<n; i++){

    pq.push(arr[i]);
 }

 while(!pq.empty()){

    sum += pq.top();
    pq.pop();

    count++;

    if(sum >= k){

        break;
    }
 }

 if(sum < k){
    
    cout<<"-1"<<endl;;
 }
 else{

    cout<<count<<endl;
 }


    return 0;
}