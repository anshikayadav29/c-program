#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int d[4][4]={
        {0,3,1e9,7},
        {8,0,2,1e9},
        {5,1e9,0,1},
        {2,1e9,1e9,0}
    };

    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<d[i][j]<<" ";
        cout<<endl;
    }
}
