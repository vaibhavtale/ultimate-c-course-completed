#include<iostream>
using namespace std;

void max_subarray(int arr[],int n,int x,int k){

    int ans,sum = 0;

   for(int i=0; i<k; i++){

    sum += arr[i];

   }
   if(sum < x){

    ans = sum;
   }

   for(int i=k; i<n; i++){

    sum -= arr[i-k];
    sum += arr[i];

    if(sum < x){

        ans = max(ans,sum);
    }
   }

     cout<<ans<<endl;

}

int main(){

    int n,x,k;
    cin>>n>>x>>k;

    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    max_subarray(arr,n,x,k);

    return 0;
}