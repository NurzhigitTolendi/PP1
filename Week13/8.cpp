#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    string id; // fields/attributes
    string name;
    int age;
    float gpa;

    void read() {
        cin >> id >> name >> age >> gpa;
    }

    void show() {
        cout << id << " " << name << " " << age << " " << gpa << endl;
    }
};

bool sortByAge(Student s1, Student s2){
    return s1.age < s2.age;
    // if(s1.age < s2.age)
    //     return true;
    // return false;
}

int main(){
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;

    Student s[n];
    for(int i = 0; i < n; i++)
        s[i].read();

    sort(s, s + n, sortByAge);

    for(int i = 0; i < n; i++)
        s[i].show();



    return 0;
}