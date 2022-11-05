#include<iostream>
#include<vector>
using namespace std;

void dfs(int src,vector<int> adj[],vector<bool> &vis)
{
    vis[src] = true;

    cout<<src<<" ";

    for(auto x : adj[src]) {

        if(vis[x]){  }

        else {
             dfs(x,adj,vis);
        }

    }
}


int main()
{ 
    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];
    vector<bool> vis(n+1,false);

    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<n; i++)
    {
        if(!vis[i]){

            dfs(i,adj,vis);
        }
    }

    return 0;
}