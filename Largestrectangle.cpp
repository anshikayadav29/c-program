#include <iostream>
#include <stack>
using namespace std;

int main() {
    int h[]={2,1,5,6,2,3};
    stack<int> st;
    int maxA=0,n=6;

    for(int i=0;i<=n;i++) {
        int cur = (i==n)?0:h[i];
        while(!st.empty() && cur<h[st.top()]) {
            int height=h[st.top()]; st.pop();
            int width = st.empty()?i:i-st.top()-1;
            maxA=max(maxA,height*width);
        }
        st.push(i);
    }
    cout<<maxA;
}
