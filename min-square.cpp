#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

const int N = 1e4+2;
vector<int> dp(N,INT_MAX);

// This recursive solution has the time complexity of 2^n and that's why it does'nt work for largr number of values

int minsquare(int n){

    if(n == 0 || n==1 || n==2 || n==3){
        return n;
    }

    int ans = INT_MAX;

    for(int i=1; i<=sqrt(n); i++){

        ans = min(ans,1 + minsquare(n-i*i));

    }

    return ans;
}


// By using memoization we can reduce the time complexity of this solution. for this all we need is a dp[] array and store(memorize) the value of function once called.

int minsquare(int n){

     if(n == 0 || n==1 || n==2 || n==3){
        
        return n;
    }

    if(dp[n] != INT_MAX){

        return dp[n];
    }

    for(int i=1; i<=sqrt(n); i++){

        dp[n] = min(dp[n],1 + minsquare(n-i*i));
    }
    
    return dp[n];
}

// This can be reduce be reduce by another method called tabulation wich firstly stores the value of base cases hence, it is also called as Bottom-up approach

int minsquare(int n){

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for(int i=1; i<=sqrt(n); i++){

        for(int j=0; i*i+j<=n; j++){

            dp[i*i+j] = min(dp[i*i+j],1+dp[j]);
        }
    }

    return dp[n];
}

int main(){

    int n;
    cin>>n;

    cout<<minsquare(n)<<endl;

    return 0;
}