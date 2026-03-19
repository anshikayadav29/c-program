struct Student {
    string name;
    int marks;
};

int main() {
    Student s[3];
    int max = 0;

    for(int i=0;i<3;i++) {
        cin >> s[i].name >> s[i].marks;
        if(s[i].marks > max)
            max = s[i].marks;
    }

    cout << max;
}
