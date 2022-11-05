#include<iostream>
#include<vector>
using namespace std;

bool is_cycle(int src,vector<bool> &stack,vector<bool> &vis,vector<vector<int>> &adj)
{
    stack[src] = true;

    if(!vis[src])
    {
        vis[src] = true;

        for(auto x : adj[src])
        {
            if(!vis[x] && is_cycle(x,stack,vis,adj))
            {
                return true;
            }

            if(stack[x])
            return true;
        }
    }
    stack[src] = false;
    return false;
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adj(n+1);
    vector<bool> stack(n+1,false);
    vector<bool> vis(n+1,false);

    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
    }

    bool cycle = false;

    for(int i=0; i<n; i++)
    {
        if(!vis[i] && is_cycle(i,stack,vis,adj))
        {
            cycle = true;
        }
    }

    if(cycle)
    cout<<" yes cycle is present"<<endl;

    else
    cout<<" no theres no cycle"<<endl;


    return 0;
}