#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool mycompare(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
}

#define rep(i,a,b) for(int i=a; i<b; i++)

int main()
{
    int n;
    cin>>n;

    vector<vector<int>> v;

    rep(i,0,n)
    {
        int start,end;
        cin>>start>>end;

        v.push_back({start,end});
    }

    sort(v.begin(),v.end(),mycompare);


    return 0;
}