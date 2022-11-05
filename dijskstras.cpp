#include<iostream>
#include<vector>
using namespace std;

 #define V 9

vector<bool> vis(V,false);
vector<int>  dist(V,INT_MAX);

int mindist(){

    int min = INT_MAX;
    int minvertex;

    for(int i=0; i<V; i++){

        if(!vis[i] && dist[i] <= min){
            
            min = dist[i];   minvertex = i;
           
        }
    }

    return minvertex;
}


void dijkstras(int graph[V][V],int src){


    dist[src] = 0;

    for(int i=0; i<V; i++){


        int u = mindist();

        vis[u] = true;


        for(int v=0; v<V; v++){

            if(graph[u][v] && !vis[v] && (dist[u] + graph[u][v] ) < dist[v]){

                dist[v] = (dist[u] + graph[u][v] );
            }

        }

    }

      
}

int main(){

    
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };


                        dijkstras(graph,0);

                        for(auto i  : dist){

                            cout<<i<<" ";
                        }


    return 0;
}