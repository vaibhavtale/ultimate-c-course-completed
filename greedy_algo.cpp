#include<iostream>
#include<vector>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; i++)


int main()
{
    int n,x;
    cin>>n>>x;

    int arr[n];

    rep(i,0,n)
    cin>>arr[i];

    int ans = 0;

    rep(i,0,n)
    {
        ans += x/arr[i];

        x -= x/arr[i] * arr[i];
    }

    cout<<ans<<endl;

    return 0;
}