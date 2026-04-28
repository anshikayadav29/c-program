#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

int main() {
    string begin="hit", end="cog";
    unordered_set<string> dict={"hot","dot","dog","lot","log","cog"};

    queue<pair<string,int>> q;
    q.push({begin,1});

    while(!q.empty()) {
        auto [word,steps]=q.front(); q.pop();

        if(word==end) {
            cout<<steps;
            break;
        }

        for(int i=0;i<word.size();i++) {
            string temp=word;
            for(char c='a';c<='z';c++) {
                temp[i]=c;
                if(dict.count(temp)) {
                    q.push({temp,steps+1});
                    dict.erase(temp);
                }
            }
        }
    }
}
