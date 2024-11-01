#include <iostream>
using namespace std;

float square(float n){
    return n * n;
}

void hello(){
    cout << "Hello!" << endl;
}

void helloStudent(string name){
    cout << "Hello " + name;
}

int my_max(int a, int b){
    if (a > b)
        return a;
    return b;
}


int main() {
    // max(a, b) - max of two elements 

    int n = 6;
    int m = 10;

    int my_maximum = my_max(n, m);
    cout << my_maximum;

    return 0;
}
