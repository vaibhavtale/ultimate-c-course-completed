#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // adjacency matrix -------------------


    // int n,m;

    // cin>>n>>m;

    // int arr[n+1][n+1];

    // for(int i=0; i<m; i++)
    // {
    //     int u,v;
    //     cin>>u>>v;

    //     arr[u][v] = 1;
    //     arr[v][u] = 1;
    // }

    // adjacency list  ------------------------

    int n,m;

    cin>>n>>m;

    vector<int> arr[n];

    for(int i=0; i<m; i++)
    {
        int u,v;

        cin>>u>>v;

        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    
    for(int i=0; i<m; i++)
    {
       

       
    }



    return 0;
}