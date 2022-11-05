#include<iostream>
using namespace std;

void min_subarraySum(int arr[],int n,int x){

    int sum = 0;
    int ans = INT_MAX;

    int start = 0; int end = 0;

    //be as good as possible in DSA so that you will become job reddy sooner and will be able solve your financial conditions..
    // work h@rd br0 //

    while(end < n){

        while(sum <= x && end < n){
            
            sum += arr[end];
            end++;
            
        }

        while(sum > x && start < n){

            if(end - start < ans){

                ans = end - start;
            }

            sum -= arr[start];
            start++;

        }
    }

    cout<<ans<<endl;

}

int main(){

    int n,x;
    cin>>n>>x;

    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];

    }

    min_subarraySum(arr,n,x);

    return 0;
}