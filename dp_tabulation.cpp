#include<iostream>
using namespace std;

int fib(int n,int dp[]){

    if(n <= 1){
        return n;
    }

  dp[0] = 0;
  dp[1] = 1;

  for(int i=2; i<=n; i++){

      dp[i] = dp[i-1] + dp[i-2];
  }
  return dp[n];
}

int main()
{
    int n;
    cin>>n;

    int dp[n+1];

    cout<<fib(n,dp)<<endl;

    return 0;
}