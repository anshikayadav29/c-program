struct Student {
    int id;
    string name;
};

int main() {
    Student s;
    cin >> s.id >> s.name;
    cout << s.id << " " << s.name;
}
