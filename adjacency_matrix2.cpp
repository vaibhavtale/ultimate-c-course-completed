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
    vii adjm(n+1,vi(n+1,0));

    rep(i,0,m)
    {
        int x,y;
        cin>>x>>y;

        adjm[x][y] = 1;
        adjm[y][x] = 1;

    }

    cout<<"this is representation of adjacency matrix"<<endl;

    rep(i,0,n+1)
    {
        rep(j,0,n+1)
        {
            cout<<adjm[i][j]<<" ";
        }cout<<endl;
    }

    if(adjm[3][1] == 1)
    {
        cout<<"there is edge between 3 and 1"<<endl;
    }
    else{
        cout<<"no edge"<<endl;
    }

    return 0;
}