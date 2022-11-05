#include<iostream>
using namespace std;

# define N 4

bool is_safe(int x,int y,int maze[N][N]){

    if(x < N && y < N && maze[x][y] == 1){
        return true;
    }
    return false;
}

bool solve_maze(int maze[N][N],int x,int y,int vis[N][N]){

    if(x == (N-1) && y == (N-1) ){

        vis[x][y] = 1;
        return true;
    }

    if(is_safe(x,y,maze)){

        if(vis[x][y] == 1)
            return false;
        vis[x][y] = 1;


        if(solve_maze(maze,x+1,y,vis)){
            
            return true;
        }

        if(solve_maze(maze,x,y+1,vis)){

            return true;
        }

        vis[x][y] = 0;
        return false;

    }

    return false;
}

int main(){

    int maze[N][N] = {{1,0,0,0},
                      {1,1,0,1},
                      {0,1,0,0},
                      {1,1,1,1}};

      int vis[N][N] = {{0,0,0,0},
                       {0,0,0,0},
                       {0,0,0,0},
                       {0,0,0,0}};               
    
    cout<<solve_maze(maze,0,0,vis)<<endl;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<vis[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}