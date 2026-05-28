#include <iostream>
using namespace std;

int main() {
    string tasks[100];
    int count = 0;
    int choice;

    while(true) {
        cout << "\n1.Add Task";
        cout << "\n2.Show Tasks";
        cout << "\n3.Exit";
        cout << "\nChoice: ";
        cin >> choice;

        cin.ignore();

        if(choice == 1) {
            cout << "Enter Task: ";
            getline(cin, tasks[count]);
            count++;
        }

        else if(choice == 2) {
            cout << "\nTasks:\n";

            for(int i=0;i<count;i++)
                cout << i+1 << ". " << tasks[i] << endl;
        }

        else
            break;
    }

    return 0;
}
