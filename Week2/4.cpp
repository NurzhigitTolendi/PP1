#include <iostream> 

using namespace std;

int main() {
    int a = 5;
    int b = 3;

    int c = a & b ; // and operator 

    // 101 
    // 011 
    // 001 

    int d = a | b ; // or operator 

    // 101 
    // 011 
    // 111 

    int e = a ^ b; // xor operator 

    // 0101 
    // 0011
    // 0110

    int f = ~a; // not 

    // 0101 
    // 1010 

    int g = a << 1; // left shift 

    // 0101 01010 
    // 1010  - 10 

    int h = a >> 1; // right shift 

    // 0101 
    // 0010 - 2 

    cout << c << endl; // 1
    cout << d << endl; // 7
    cout << e << endl; // 6 
    cout << f << endl; // -6 
    cout << g << endl; // 10 
    cout << h << endl; // 2
    

    return 0;
}


// 0 1 2 3 4 5 6 7 8 9 
// 0 1 
// 0 1 2 3 4 5 6 7
// 0 1 2 3 4 5 6 7 8 9 A B C D E F


// 0 1 2  3  4    5   6   7 
// 0 1 10 11 100  101 110  111



