#include <iostream>
using namespace std;

int main() {
    string msg;

    cout << "Chatbot Started (type exit to stop)\n";

    while(true) {
        cout << "\nYou: ";
        getline(cin, msg);

        if(msg == "hello")
            cout << "Bot: Hi!";
        else if(msg == "how are you")
            cout << "Bot: I am fine!";
        else if(msg == "bye")
            cout << "Bot: Goodbye!";
        else if(msg == "exit")
            break;
        else
            cout << "Bot: I don't understand";
    }

    return 0;
}
