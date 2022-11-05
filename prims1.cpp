#include<iostream>
#include<vector>
using namespace std;

#define V 5

vector<bool> mstset(V,false);
vector<int> key(V,INT_MAX);
vector<int> parent(V);

int mindist(){

    int min = INT_MAX;
    int minvertex;

    for(int i=0; i<V; i++){

        if(!mstset[i] && key[i] < min){

            min = key[i];
            minvertex = i;

            
        }
    }
    return minvertex;
}


void prims(int graph[V][V]){

    key[0] = 0;
    parent[0] = -1;

    for(int i=0; i<V; i++){

        int u = mindist();
        mstset[u] = true;

        for(int v=0; v<V; v++){

            if(!mstset[v] && graph[u][v] && graph[u][v] < key[v]){

                parent[v] = u;
                key[v] = graph[u][v];
            }

        }
    }
}

int main(){

     int graph[V][V] = { { 0, 2, 0, 6, 0 }, 
                        { 2, 0, 3, 8, 5 }, 
                        { 0, 3, 0, 0, 7 }, 
                        { 6, 8, 0, 0, 9 }, 
                        { 0, 5, 7, 9, 0 } }; 

                        prims(graph);

                        for(auto i : key){

                            cout<<i<<endl;
                        }


    return 0;
}