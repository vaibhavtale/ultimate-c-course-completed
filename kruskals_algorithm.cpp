#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

const int N = 1e5;
int parent[N];
int sz[N];

void make_set(int a){
    parent[a] = a;
    sz[a] = 0;
}

int find_set(int a){

    if(parent[a] == a){
        return a;
    }
    else{
        return parent[a] = find_set(parent[a]);
    }
}

void make_union(int a,int b){

     a = find_set(a);
     b = find_set(b);

     if(a != b){

         if(sz[a] < sz[b]){

             parent[a] = b;
             sz[b]++;
         }
         else if(sz[a] > sz[b]){

             parent[b] = a;
             sz[a]++;
         }
         else{

             parent[b] = a;
             sz[a]++;             
         }
     }
}


int main()
{
    for(int i=0; i<N; i++){
        make_set(i);
    }

    int n,m;
    cin>>n>>m;

    vector<vector<int>> edges;

    for(int i=0; i<m; i++){

        int u,v,w;
        cin>>u>>v>>w;

        edges.push_back({w,u,v});
    }

    sort(edges.begin(),edges.end());

    int cost = 0;

    for(auto i : edges){

        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = find_set(u);
        int y = find_set(v);

        if(x == y){

            continue;
        }
        else{
            cout<<u<<" "<<v<<endl;
            cost += w;
            make_union(u,v);
        } 
    }
    cout<<cost<<endl;

    return 0;
}