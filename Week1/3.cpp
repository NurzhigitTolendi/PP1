#include <iostream>

using namespace std;

int main(){
    /*
        + - * / %
        increment / decrement number values

        pre/post
        pre increment / post increment
    */
    int a = 2; // assign the initial value
    a++; // post increment -> a++; => a = a + 1;

    cout << a++ << endl;
    ++a; // pre increment -> ++a; => a = a + 1;
    cout << ++a << endl;

    // int b = a++;
    int b = ++a;
   // cout << b << endl;

    int c = b-- + --a;
   // cout << c << endl;

    cout << a << " " << b << " " << c << endl;



    return 0;
}