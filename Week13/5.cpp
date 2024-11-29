#include <iostream>

using namespace std;

struct Student {
    string id; // fields/properties/attributes
    string name;
    int age;
    float gpa;
};

int main(){
    freopen("in.txt", "r", stdin);

    Student s;
    cin >> s.id >> s.name >> s.age >> s.gpa;

    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl;




    return 0;
}