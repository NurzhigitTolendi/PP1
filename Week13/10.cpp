#include <iostream>
#include "student.h" // .h - header file

using namespace std;

int main(){
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;

    Student s[n];
    for(int i = 0; i < n; i++)
        s[i].read();

    float gpa;
    cin >> gpa;

    filterByGPA(s, n, gpa);




    return 0;
}