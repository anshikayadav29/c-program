#include <iostream>
#include <vector>
using namespace std;

class SegmentTree {
    vector<int> tree;
    int n;

    void build(vector<int>& arr, int v, int tl, int tr) {
        if(tl == tr) tree[v] = arr[tl];
        else {
            int tm = (tl + tr) / 2;
            build(arr, 2*v, tl, tm);
            build(arr, 2*v+1, tm+1, tr);
            tree[v] = tree[2*v] + tree[2*v+1];
        }
    }

    int query(int v, int tl, int tr, int l, int r) {
        if(l > r) return 0;
        if(l == tl && r == tr) return tree[v];
        int tm = (tl + tr) / 2;
        return query(2*v, tl, tm, l, min(r, tm)) +
               query(2*v+1, tm+1, tr, max(l, tm+1), r);
    }

public:
    SegmentTree(vector<int>& arr) {
        n = arr.size();
        tree.resize(4 * n);
        build(arr, 1, 0, n - 1);
    }

    int getSum(int l, int r) {
        return query(1, 0, n - 1, l, r);
    }
};

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    SegmentTree st(arr);
    cout << "Sum of [1,3] is " << st.getSum(1, 3);
}