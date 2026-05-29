#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int user = rand()%6 + 1;
    int ai = rand()%6 + 1;

    cout << "You: " << user << endl;
    cout << "AI: " << ai << endl;

    if(user > ai)
        cout << "You Win";
    else if(user < ai)
        cout << "AI Wins";
    else
        cout << "Draw";

    return 0;
}
