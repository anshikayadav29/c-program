#include <iostream>
#include <stack>
using namespace std;

int largestHist(int h[], int n) {
    stack<int> st;
    int maxA=0;

    for(int i=0;i<=n;i++) {
        int cur = (i==n)?0:h[i];
        while(!st.empty() && cur<h[st.top()]) {
            int height=h[st.top()]; st.pop();
            int width=st.empty()?i:i-st.top()-1;
            maxA=max(maxA,height*width);
        }
        st.push(i);
    }
    return maxA;
}

int main() {
    int mat[2][3]={{1,0,1},{1,1,1}};
    int h[3]={0}, res=0;

    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++)
            h[j]= mat[i][j] ? h[j]+1 : 0;

        res=max(res, largestHist(h,3));
    }
    cout<<res;
}
