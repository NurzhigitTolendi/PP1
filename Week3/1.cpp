#include <iostream>
using namespace std;

int main() {
    // cout << "Hello world!" << endl;
    /*
    What is an array? 

    Array - collection of elements of the same type 

    data_type var_name[number of variables]
    int a[5] ;

    a[5] = {3, 2, 10, -7, 4}


    address:    0x...   0x...    0x...      0x...     0x...
     values:    3       2        10        -7         4 
    indexes:    0       1         2         3         4      
    */
    int a[5] = {3, 2, 10, -7, 4};

    cout << a << endl;

    double b[3] = {2.4, 5.7, 10.5}; 

    cout << b;

    return 0;
}