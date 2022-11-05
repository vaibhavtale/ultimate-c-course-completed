#include<iostream>
#include<vector>
using namespace std;

bool is_cycle(int src,vector<vector<int>> &adj,vector<bool> &vis,int parent)
{
    vis[src] = true;

    for(auto x : adj[src])
    {
       if(x != parent)
       {
           if(vis[x])
           {
               return true;
           }
           if (!vis[x] && is_cycle(x,adj,vis,src)){
              
              return true;
           }
       }
    }
    return false;
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adj(n+1);
    vector<bool> vis(n,false);
    bool cycle = false;

    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    for(int i=0; i<n; i++)
    {
        if(!vis[i] && is_cycle(1,adj,vis,-1))
        {
            cycle = true;
        }
    }

    if(cycle)
    {
        cout<<"there is a cycle"<<endl;
    }
    else
    { cout<<" no cycle present"<<endl;}
  


    return 0;
}