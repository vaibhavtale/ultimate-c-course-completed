#include<iostream>
#include<vector>
using namespace std;

int fib(int n,int dp[]){

    if(n <= 1){

        return n; 
    }

    if(dp[n] != -1){

        return dp[n];
    }

    return dp[n] = fib(n-2,dp) + fib(n-1,dp);
}

int main()
{
    int n;
    cin>>n;

    int dp[n+1];
    
    for(int i=0; i<=n; i++){

        dp[i] = -1;
    }

    cout<<fib(n,dp)<<endl;


    return 0;
}