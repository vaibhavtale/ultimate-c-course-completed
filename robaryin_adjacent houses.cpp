#include<iostream>
#include<vector>
using namespace std;

    // we can rob in the non-adjacent houses where first and last house is adjacent to each other so we can choose either first element or last one. let's try to build pure recursive solution.

    int house_robbery(vector<int> fgj,int n){

        if(n < 0){
            return 0;
        }
        if(n==0){
            return fgj[0];
        }

        int inc = house_robbery(fgj,n-2) + fgj[n];
        int exc = house_robbery(fgj,n-1) + 0;

        return max(inc,exc);
    }

    // now let's apply memoization to reduce the time complexity of this solution....

    int house_robbery(vector<int> v,vector<int> dp,int n){

        if(n < 0){
            return 0;
        }
        if(n==0){
            return v[0];
        }

        if(dp[n] != -1){
            
            return dp[n];
        }

        int inc = house_robbery(v,dp,n-2) + v[n];
        int exc = house_robbery(v,dp,n-1) + 0;

        dp[n] = max(inc,exc);

        return dp[n];

    }

    // okk thats pretty good now try bottom aproach wich is called as tabulation method...

    int house_robbery(vector<int> v,vector<int> dp,int n){

        dp[0] = v[0];

        for(int i=1; i<n; i++){

            int inc = dp[i-2] + v[i];
            int exc = dp[i-1] + 0;

            dp[i] = max(inc,exc);
        }

        return dp[n-1];
    }

int main(){

    int arr[] = {8,7,3,9};
    vector<int> dp(4,-1);

    vector<int> first,second;

        for(int i=0; i<4; i++){

            if(i != 4-1){

                first.push_back(arr[i]);
            }
            if(i != 0){

                second.push_back(arr[i]);
            }
        }

    cout<<max(house_robbery(first,dp,first.size()),house_robbery(second,dp,second.size()));

    return 0;
}