#include<iostream>
#include<vector>
using namespace std;

const int N = 1e5;
int parent[N];
int sz[N];

void make_set(int i){

     parent[i] = i;
     sz[i] = 0;
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
            parent[a] = b;
            sz[b]++;
        }
    }
}


int main()
{
    for(int i=0; i<N; i++)
    {
        make_set(i);
    }

    int n,m;
    cin>>n>>m;

    vector<vector<int>> edges;

    for(int i=0; i<m; i++){

        int u,v;
        cin>>u>>v;

       edges.push_back({u,v});
    }
    bool cycle = false;

        for(auto j : edges){

            int u = j[0];
            int v = j[1];
            int x = find_set(u);
            int y = find_set(v);

            if(x == y){

                cycle = true;
            }
            else{
                make_union(u,v);
            }
        }

        if(cycle){
            cout<<"cycle present"<<endl;
        }
        else{
            cout<<" no cycle present"<<endl;
        }
   

    return 0;
}