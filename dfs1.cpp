#include<iostream>
#include<vector>
using namespace std;

const int N = 1e5;
vector<bool> vis(N,false);

 vector<int> adj[N];

void dfs(int node){

    vis[node] = true;
    cout<<node<<endl;

    vector<int> :: iterator it;

    for(it=adj[node].begin(); it != adj[node].end(); it++){

        if(!vis[*it]){

            dfs(*it);
        }
        else{
            
        }
        
    }

}

int main(){

    int n,m;
    cin>>n>>m;
   
    

    int x,y;

    for(int i=0; i<m; i++){

        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);

    }

    dfs(1);


    return 0;
}