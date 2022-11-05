#include<iostream>
#include<vector>
 using namespace std;

    // here is the simple recursive solution to count possible ways to reach nth step with time complexity a^n (exponential).

    int count_steps(int n){

    if(n == 1 || n == 2){

        return 1;
    }

    return count_steps(n-1) + count_steps(n-2);
    }


    // Using memoization to reduce the time cpomplexity, create an 1d array.

    int count_steps(int n,vector<int> dp){

        if(n == 1 || n == 2){
            return 1;
        }

        if(dp[n] != INT_MIN){

            return dp[n];
        }

        dp[n] = count_steps(n-1,dp) + count_steps(n-2,dp);

        return dp[n];
    }


    // let's try the tabulation method to reduce the time complexity of this solution further & s it possible here.

    int count_steps(int n,vector<int> dp){

       dp[1] = 1;
       dp[2] = 1;

       for(int i=3; i<=n; i++){

        dp[i] = dp[i-1] + dp[i-2];
       }

       return dp[n];
    }



    int main(){

    int n;
    cin>>n;

    vector<int> dp(n+1,INT_MIN);

    cout<<count_steps(n,dp)<<endl;

    return 0;
 }