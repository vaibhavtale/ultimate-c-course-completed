#include<iostream>
#include<vector>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vii vector<vi>

int main()
{
    int n,m;

    cin>>n>>m;

    vi adjl[n+1];

    rep(i,0,m)
    {
        int x,y;
        cin>>x>>y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);

    }

    rep(i,0,n+1)
    {
        cout<<i<<"->"<<" ";

        vector<int> :: iterator it;

        for(it=adjl[i].begin(); it!=adjl[i].end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    return 0;
}