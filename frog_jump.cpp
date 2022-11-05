#include<iostream>
#include<vector>
#include<limits>
using namespace std;

// this gonna be the pure recursive solution to find all possible ways a frog can jump and with the minimum value possible...
int frog_jump(int arr[],int n){

    if(n == 0){

        return 0;
    }

    int left = frog_jump(arr,n-1) + abs(arr[n] - arr[n-1]);
    int ans;
    if(n > 1){
    int right = frog_jump(arr,n-2) + abs(arr[n] - arr[n-2]);
     ans = min(left,right);
    }
    
    return ans;
}

// As this solution executes the code in exponential time complexity we have to find the better approach to solve this problem called Memoization.

int frog_jump2(int arr[],int n,vector<int> dp){

    if(n == 0){
        return 0;
    }

    if(dp[n] != -1){

        return dp[n];
    }

    int left = frog_jump2(arr,n-1,dp) + abs(arr[n] - arr[n-1]);
    int right = INT_MAX;
    if(n > 1){
         right = frog_jump2(arr,n-2,dp) + abs(arr[n] - arr[n-2]);
    }

    return dp[n] = min(left,right);
}

// okk now lets try the Tabulation method to reduce the time complexity further by using same recurrence solution..

int frog_jump3(int arr[],int n,vector<int> dp){

    dp[0] = 0;

    for(int i=1; i<=n; i++){

        int left = dp[i-1] + abs(arr[i] - arr[i-1]);
        int right = INT_MAX;
        if(i>1)
        right =  dp[i-2] + abs(arr[i] - arr[i-2]);

        dp[i] = min(left,right);
    }

    return dp[n];
}

int frog_jumpk(int arr[],int n,int k,vector<int> dp){

    if(n == 0){
        return 0;
    }

    int min_steps = INT_MAX;

    for(int i=1; i<=k; i++){

        int jump = frog_jumpk(arr,n-i,k,dp) + abs(arr[n] - arr[n-i]);
        min_steps = min(min_steps,jump);
    }

    return min_steps;
}

int main(){

    int arr[] = {30,10,60,10,60,50};
    vector<int> dp(6,INT_MAX);

    // cout<<frog_jump(arr,5)<<endl;
    // cout<<frog_jump2(arr,5,dp)<<endl;
    // cout<<frog_jump3(arr,5,dp)<<endl;
    cout<<frog_jumpk(arr,5,5,dp)<<endl;
    
    return 0;
}