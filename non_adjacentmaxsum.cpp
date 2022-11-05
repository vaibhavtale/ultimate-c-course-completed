#include<iostream>
#include<vector>
using namespace std;

// We have to find the maximum sum all non-adjacent elements .

    // int adjacent_sum(int arr[],int n){
    //     // try to build an recursive solution to find sum of all elments wich are non adjacent.
        
    //     if(n < 0){

    //         return 0;
    //     }
    //     if(n == 0){

    //         return arr[n];
    //     }

    //     int inc = adjacent_sum(arr,n-2) + arr[n];
    //     int exc = adjacent_sum(arr,n-1) + 0;

    //     return max(inc,exc);
    // }

    // the upper one is a pure recursive solution with the exponential time complexity, let's try to solve this problem by using memoization to get more optimized solution..

    // int adjacent_sum(int arr[],vector<int> dp,int n){

    //     if(n < 0){
    //         return 0; 
    //     }
    //     if(n == 0){
    //         return arr[0];
    //     }
    //     if(dp[n] != -1){
    //         return dp[n];
    //     }

    //     int inc = adjacent_sum(arr,dp,n-2) + arr[n];
    //     int exc = adjacent_sum(arr,dp,n-1) + 0;

    //     dp[n] = max(inc,exc);

    //     return dp[n];
    // }

    // now, to reduce the timecoplexity further let us try to solve this problem by using bottom up approach wich is Tabulation method...

    int adjacent_sum(int arr[],vector<int> dp,int n){

        dp[0] = arr[0];

        for(int i=1; i<=n; i++){

            int inc = dp[i-2] + arr[i];
            int exc = dp[i-1] + 0;
            
            dp[i] = max(inc,exc);
            
        }

        return dp[n];
    }

int main(){

    int arr[] = {9,9,8,2};
    vector<int> dp(4,0);

    cout<<adjacent_sum(arr,dp,3);

    return 0;
}