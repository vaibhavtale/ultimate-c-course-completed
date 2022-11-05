#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adj(n);
    vector<int> in_deg(n,0);
    queue<int> pq;

    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        in_deg[v]++;
    }

    for(int i=0; i<n; i++)
    {
       if(in_deg[i] == 0) 
       {
           pq.push(i);
       }
    }


       while(!pq.empty())
       {

           int x = pq.front();
           pq.pop();

           cout<<x<<" ";

           for(auto it : adj[x])
           {
               in_deg[it]--;
               if(in_deg[it] == 0)
               {
                   pq.push(it);
               }
           }
       }



    return 0;
}