#include <bits/stdc++.h>
using namespace std;

int n=4;
int board[10][10];

bool safe(int r,int c){
    for(int i=0;i<c;i++)
        if(board[r][i]) return false;

    for(int i=r,j=c;i>=0&&j>=0;i--,j--)
        if(board[i][j]) return false;

    for(int i=r,j=c;i<n&&j>=0;i++,j--)
        if(board[i][j]) return false;

    return true;
}

bool solve(int c){
    if(c>=n) return true;

    for(int i=0;i<n;i++){
        if(safe(i,c)){
            board[i][c]=1;

            if(solve(c+1))
                return true;

            board[i][c]=0;
        }
    }

    return false;
}

int main(){
    solve(0);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<board[i][j]<<" ";
        cout<<endl;
    }
}
