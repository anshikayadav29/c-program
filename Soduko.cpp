#include <iostream>
using namespace std;

bool isSafe(int grid[9][9], int r, int c, int num) {
    for(int x=0;x<9;x++)
        if(grid[r][x]==num || grid[x][c]==num)
            return false;

    int sr = r - r%3, sc = c - c%3;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(grid[sr+i][sc+j]==num)
                return false;

    return true;
}

bool solve(int grid[9][9]) {
    for(int r=0;r<9;r++) {
        for(int c=0;c<9;c++) {
            if(grid[r][c]==0) {
                for(int num=1;num<=9;num++) {
                    if(isSafe(grid,r,c,num)) {
                        grid[r][c]=num;
                        if(solve(grid)) return true;
                        grid[r][c]=0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main() {
    int grid[9][9] = {0};
    solve(grid);
}
