#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// we need to find out all the possible ways to the rod of length n by the possible sizes x , y and z...

int rod_cutting(int n, int x, int y, int z)
{

    if (n == 0)
    {
        return 0;
    }

    if (n < 0)
    {
        return INT_MIN;
    }

    int a = rod_cutting(n - x, x, y, z) + 1;
    int b = rod_cutting(n - y, x, y, z) + 1;
    int c = rod_cutting(n - z, x, y, z) + 1;

    int ans = max(a, max(b, c));

    return ans;
}

// this was a pure recursive solution with the exponential time complexity, let's apply the memoization method to reduce the time complexity....

    int rod_cutting(int n,int x,int y,int z,vector<int> dp){
        
        if(n < 0){            
            return INT_MIN;                         
        }
        if(n==0){
            return 0;
        }
        if(dp[n] != INT_MAX){
            return dp[n];
        }

        int a = rod_cutting(n-x,x,y,z,dp) + 1;
        int b = rod_cutting(n-y,x,y,z,dp) + 1;
        int c = rod_cutting(n-z,x,y,z,dp) + 1;

        dp[n] = max(a,max(b,c));

        return dp[n];
    }

  // that's awesome you did it. now try tabulation method..

    int rod_cutting(int n,int x,int y,int z,vector<int> dp){

        dp[0] = 0;

        for(int i=1; i<dp.size(); i++){

           
        }
    }

int main()
{
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    vector<int> dp(n + 1, INT_MAX);

    cout << rod_cutting(n, x, y, z,dp) << endl;

    return 0;
}
