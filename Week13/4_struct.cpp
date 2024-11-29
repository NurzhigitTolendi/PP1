#include <iostream>

using namespace std;

struct Student {
    string id; // fields/attributes
    string name;
    int age;
    float gpa;
};

int main(){
    /* What is Struct?
    Structures (struct) are user-defined data types 
    that allow you to combine several variables of different types into a single entity. 
    This is very useful when you need to store related data together.
    */
    int a;
    a = 2;

    Student s;
    s.id = "24B1111";
    s.name = "Student1";
    s.age = 20;
    s.gpa = 3.5;

    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl;

    return 0;
}