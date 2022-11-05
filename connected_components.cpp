#include<iostream>
#include<vector>
using namespace std;

int get_component(int idx,vector<bool> &vis,vector<vector<int>> &adj)
{
       if(vis[idx]){
        return 0;
     }
        vis[idx] = true;
        int ans = 1;
 
       for(auto x : adj[idx])
        {
            if(!vis[x])
            ans += get_component(x,vis,adj);
            vis[x] = true;

        }
        return ans;
   
}


int main()
{
    int n,m;
    cin>>n>>m;
  
    vector<vector<int>> adj(n+1);
    vector<bool> vis(n+1,false);
    vector<int> component(n+1);

    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    // for(int i=0; i<n; i++)
    // {
    //     cout<<i<<"->";
    //     for(auto x : adj[i])
    //     {
    //         cout<<x<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            component.push_back(get_component(i,vis,adj));
        }
    }

    for(auto i : component)
    {
        cout<<i<<" ";
    }

    return 0;
}