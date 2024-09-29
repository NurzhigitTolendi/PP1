#include <iostream>

using namespace std;

int main() {
    int age;
    int studentStatus;

    cout << "Enter your age: " << endl;
    cin >> age; 
    cout << "Are you a student? (y/n)" << endl;
    cin >> studentStatus ;

    if (age >= 18) {
        if (studentStatus == 'y') {
            cout << "You are an adult student!" << endl;
        } else {
            cout << "You are an adult non student!" << endl; 
        }
    } else {
        if (studentStatus == 'y') {
            cout << "You are not adult student!" << endl; 
        } else {
            cout << "You are not adult non student!" << endl; 
        }
    }

    return 0;
}