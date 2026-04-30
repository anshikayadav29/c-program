#include <bits/stdc++.h>
using namespace std;

bool solve(vector<vector<int>>& b,int r,int c){
    if(r==9) return true;

    if(c==9) return solve(b,r+1,0);

    if(b[r][c]!=0) return solve(b,r,c+1);

    for(int x=1;x<=9;x++){
        bool ok=true;

        for(int i=0;i<9;i++)
            if(b[r][i]==x || b[i][c]==x)
                ok=false;

        int sr=r-r%3,sc=c-c%3;

        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                if(b[sr+i][sc+j]==x)
                    ok=false;

        if(ok){
            b[r][c]=x;

            if(solve(b,r,c+1))
                return true;

            b[r][c]=0;
        }
    }

    return false;
}

int main(){
    vector<vector<int>> b(9,vector<int>(9,0));

    solve(b,0,0);

    cout<<"Solved";
}
