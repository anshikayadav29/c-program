#include <iostream>
using namespace std;

int n = 4;

bool solve(int maze[][4], int x, int y) {
    if(x == n-1 && y == n-1) return true;

    if(x<n && y<n && maze[x][y]==1) {
        maze[x][y] = 2;

        if(solve(maze,x+1,y) || solve(maze,x,y+1))
            return true;

        maze[x][y] = 1;
    }
    return false;
}

int main() {
    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,1},
        {0,1,0,0},
        {1,1,1,1}
    };

    solve(maze,0,0);

    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++)
            cout << maze[i][j] << " ";
        cout << endl;
    }
}
