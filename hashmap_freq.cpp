#include<iostream>
#include<map>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

int main()
{
    int n;
    cin>>n;

    int arr[n];

    rep(i,0,n)
    cin>>arr[i];

    map<int, int> freq;

    rep(i,0,n)
    freq[arr[i]]++;

    map<int, int> :: iterator it;

    for(it=freq.begin(); it!=freq.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    } 

    return 0;
}