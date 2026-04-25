#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class LRU {
    int cap;
    list<int> dq;
    unordered_map<int,list<int>::iterator> mp;

public:
    LRU(int c):cap(c){}

    void access(int x) {
        if(mp.find(x)!=mp.end())
            dq.erase(mp[x]);
        else if(dq.size()==cap) {
            int last=dq.back();
            dq.pop_back();
            mp.erase(last);
        }
        dq.push_front(x);
        mp[x]=dq.begin();
    }

    void display() {
        for(int x:dq) cout<<x<<" ";
    }
};

int main() {
    LRU l(3);
    l.access(1); l.access(2); l.access(3);
    l.access(1);
    l.display();
}
