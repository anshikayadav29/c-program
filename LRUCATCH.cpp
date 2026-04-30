#include <bits/stdc++.h>
using namespace std;

class LRU{
    int cap;
    list<int> dq;
    unordered_map<int,list<int>::iterator> mp;

public:
    LRU(int c){ cap=c; }

    void refer(int x){
        if(mp.find(x)==mp.end()){
            if(dq.size()==cap){
                int last=dq.back();
                dq.pop_back();
                mp.erase(last);
            }
        }
        else dq.erase(mp[x]);

        dq.push_front(x);
        mp[x]=dq.begin();
    }

    void display(){
        for(int x:dq) cout<<x<<" ";
    }
};

int main(){
    LRU l(3);

    l.refer(1);
    l.refer(2);
    l.refer(3);
    l.refer(1);

    l.display();
}
