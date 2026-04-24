#include <iostream>
using namespace std;

int main() {
    int dist[3][3] = {
        {0,5,1e9},
        {5,0,2},
        {1e9,2,0}
    };

    for(int k = 0; k < 3; k++)
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                dist[i][j] = min(dist[i][j],
                                 dist[i][k] + dist[k][j]);

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++)
            cout << dist[i][j] << " ";
        cout << endl;
    }
}
