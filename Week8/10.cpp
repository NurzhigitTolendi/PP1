#include <iostream>

using namespace std;

float square(float n){
    return n * n;
}

void hello(){
    cout << "hi" << endl;
}

void greeing(string name){
    cout << "Hello " << name << "!\n";
}

int my_max(int n, int m){
    if(n > m)
        return n;
    return m;
}


int main(){
    //     - [ ] max of two

    int a, b;
    cin >> a >> b;

    cout << my_max(a, b) << endl;

    return 0;
}