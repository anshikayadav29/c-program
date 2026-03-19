struct Student {
    int id;
};

int main() {
    Student s[3];

    for(int i=0;i<3;i++) {
        cin >> s[i].id;
    }

    for(int i=0;i<3;i++) {
        cout << s[i].id << endl;
    }
}
