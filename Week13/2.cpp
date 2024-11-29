#include <iostream>

using namespace std;

int main(){
    // Pointer - variable where I can store address of some data type.
     int a[] = {1, 2, 3};
    cout << a << endl;
    int *p = a;

    cout << p << " " << a << endl;
    // cout << *p << endl;

    return 0;
}