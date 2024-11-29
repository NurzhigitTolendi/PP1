#include <iostream>

using namespace std;

int main(){
    // Pointer - variable where I can store address of some data type.
    
    int x = 10; // simple variable 
    int *pn = &x; // pointer to this variable 

    cout << pn << endl;
    cout << &x << endl;
    cout << *pn << endl;

    *pn = 20;

    cout << *pn << endl;

    return 0;
}