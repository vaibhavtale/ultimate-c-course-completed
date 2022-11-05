#include <iostream>
using namespace std;

#define N 4

bool is_safe(int board[N][N], int x, int y)
{

    for (int row = 0; row < N; row++)
    {

        if (board[row][y] == 1)
        {
            return false;
        }
    }

    for(int col=0; col < N; col++){

        if(board[x][col] == 1){

            return false;
        }
    }

    int row = x;
    int col = y;

    while (row >= 0 && col >= 0)
    {

        if (board[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    while (row >= 0 && col < N)
    {

        if (board[row][col] == 1)
        {

            return false;
        }
        row--;
        col++;
    }

     while (row >= N && col >= N)
    {

        if (board[row][col] == 1)
        {
            return false;
        }
        row++;
        col++;
    }

    while (row < N && col >= 0 )
    {

        if (board[row][col] == 1)
        {

            return false;
        }
        row++;
        col--;
    }

    return true;
}

bool n_queen(int board[N][N], int x, int sol[N][N])
{

    if (x >= N)
    {
        return true;
    }

    for (int col = 0; col < N; col++)
    {

        if (is_safe(board, x, col))
        {
            sol[x][col] = 1;

            if (n_queen(board, x + 1, sol))
                return true;

            sol[x][col] = 0;
        }
    }

    return false;
}

int main()
{

    int board[N][N] = {{0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0}};

    int sol[N][N] = {{0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0}};

    cout << (n_queen(board, 0, sol)) << endl;

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {

            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}