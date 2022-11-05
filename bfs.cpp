#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> vi[n+1];

    queue <int> q;

    bool vis[n+1];

    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;

        vi[u].push_back(v);
        vi[v].push_back(u);
    }

    for(int i=0; i<n+1; i++)
    {
        cout<<i<<"-> ";

        for(auto x : vi[i])
        {
            cout<<x<<" ";
            
        }
        cout<<endl;
    }

   for(int i=1; i<n+1; i++)
   {
       vis[i] = false;
   }

   q.push(1);
   vis[1] = true;

   while(!q.empty())
   {
       int node;
       node = q.front();

       q.pop();
       cout<<node<<endl;

       vector<int> :: iterator it;

       for(it = vi[node].begin(); it != vi[node].end(); it++)
       {
          if (!vis[*it])
          {
              vis[*it] = true; 
              q.push(*it);
          }

          
       }


   }

    return 0;
}