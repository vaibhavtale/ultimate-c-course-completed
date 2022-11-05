#include<iostream>
#include<map>
using namespace std;

int main()
{
    // m[0] = 1;
    // m[1] = 1;

    // cout<<m[0]<<" "<<m[1]<<endl;

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    map <int,int> m;

     for(int i=0; i<n; i++)
    {
        m[arr[i]]++  ;
    }

    for(auto it: m )
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }

    return 0;
}