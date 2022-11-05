#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(auto &i : v)
    {
        cin>>i;
    }

    sort(v.begin(),v.end());

    long long mx =0,mn = 0;

    for(int i=0; i<n/2; i++)
    {
        mx += (v[i + n/2] - v[i]);
        mn += (v[2*i+1] - v[2*i]);
    }  

    cout<<mx<<" "<<mn<<endl;  


    return 0;
}