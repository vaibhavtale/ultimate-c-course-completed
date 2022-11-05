#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool is_bipartite(int src, vector<int> adj[], vector<int> color)
{
    color[src] = 1;

    queue<int> q;
    q.push(src);

    while(!q.empty()){

        int node = q.front();
        q.pop();

        for(auto x : adj[node]){

            if(color[x] == -1){

                color[x] = 1 - color[node];
                q.push(x);
            }
            else if(color[x] == color[node]){

                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];
    vector<int> color(n + 1, -1);
    vector<bool> vis(n + 1, false);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool bipartite_graph = false;

    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {

            if (is_bipartite(i, adj, color))
            {

                bipartite_graph = true;
            }
        }
    }

    if (bipartite_graph)
    {
        cout << "this graph is bipartite" << endl;
    }
    else
    {
        cout << "this graph is not bipartite" << endl;
    }

    return 0;
}