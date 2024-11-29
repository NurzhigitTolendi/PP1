#include <iostream>

using namespace std;

struct Student {
    string id; // fields/attributes
    string name;
    int age;
    float gpa;
};

int main(){
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    // int a[n];
    Student s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i].id >> s[i].name >> s[i].age >> s[i].gpa;


    for(int i = 0; i < n; i++)
        cout << s[i].id << " " << s[i].name << " " << s[i].age << " " << s[i].gpa << endl ;

    return 0;
}