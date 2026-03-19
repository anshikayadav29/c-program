struct Student {
    string name;
    int marks;
};

int main() {
    Student s[5];

    for(int i=0;i<5;i++) {
        cin >> s[i].name >> s[i].marks;
    }

    for(int i=0;i<5;i++) {
        cout << s[i].name << " " << s[i].marks << endl;
    }
}
