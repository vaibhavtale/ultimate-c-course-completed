#include<iostream>
#include<vector>
using namespace std;

// Simple recursive solution to find min no. of coins need to reach the amount......

    int min_coin(int amount,vector<int> arr){

        if(amount == 0){
            return 0;
        }
        if(amount < 0){
            return INT_MAX;
        }
        int mini = INT_MAX;
        for(int i=0; i<arr.size(); i++){
           int ans = min_coin(amount-arr[i],arr);
           if(ans != INT_MAX){                                             
            mini = min(mini,1+ans);
           }
        } 
        return mini;
    }

    // Applying memoization on the recursive solution to reduce it's time complexity....

    int min_coin(int amount,vector<int> arr,vector<int> dp){

        if(amount == 0){
            return 0;
        }
        if(amount < 0){
            return INT_MAX;
        }
        int mini = INT_MAX;

        if(dp[amount] != -1){

            return dp[amount];
        }

        for(int i=0; i<arr.size(); i++){

            int ans = min_coin(amount-arr[i],arr,dp);

            if(ans != INT_MAX){

                mini = min(mini,1 + ans);
                dp[amount] = mini;
            }
        }
        return dp[amount];
    }

    // Using tabulation method to reduce the time complexity further.....

    int min_coin(int amount,vector<int> arr,vector<int> dp){

        dp[0] = 0;
        
        for(int i=1; i<= amount; i++){

            for(int j=0; j<arr.size(); j++){

               if(i-arr[j] >= 0 ){


               }
            }
        }
    }

    int main(){

    vector<int> arr(3);
    vector<int> dp(5,INT_MAX);

    for(int i=0; i<3; i++){

        cin>>arr[i];
    }

    int amount = 4;
    cout<<min_coin(amount,arr,dp)<<endl;

    return 0;
}