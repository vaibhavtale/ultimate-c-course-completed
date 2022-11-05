#include<bits/stdc++.h>
#include<climits>
using namespace std;

const int N = 1e5;

int dp[N];

int min_square(int n){

    if(n <= 3){

        return n;
    }

    if(dp[n] != INT_MAX){

        return dp[n];
    }

    for(int i=1; i*i <= n; i++){

       dp[n] = min(dp[n] ,1 + min_square(n-i*i));
    }

    return dp[n];

}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<=N; i++){

        dp[i] = INT_MAX;
    }

    cout<<min_square(n)<<endl;


    return 0;
}