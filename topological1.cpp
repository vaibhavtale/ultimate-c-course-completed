#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int N = 1e2+2;

int main(){
    int n,m;
    cin>>n>>m;

vector<int> adj[N];
vector<int> indegree(n,0);

    int x,y;

    for(int i=0; i<m; i++){

        cin>>x>>y;
        //x-->y
        adj[x].push_back(y);
        indegree[y]++;
    }


    queue<int> q;

    for(int i=0; i<n; i++){

        if(indegree[i] == 0){

            q.push(i);
        }
    }

    while(!q.empty()){

        int node = q.front();

        q.pop();

        cout<<node<<" ";

        vector<int> :: iterator it;

        for(it=adj[node].begin(); it!=adj[node].end(); it++){

            indegree[*it]--;

            if(indegree[*it] == 0){

                q.push(*it);
            }
        }
    }

    return 0;
}