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
    int a[5];

    a[0] = 6;
    a[1] = 2 * a[0];
    a[2] = a[0] + a[1];
    a[4] = 2;
    a[3] = -10;

    cout << *(a + 0) << endl;
    cout << *(a + 1) << endl;
    cout << *(a + 2) << endl;
    cout << *(a + 3) << endl;
    cout << *(a + 4) << endl;

    /*
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;
    cout << a[4] << endl;
*/

    return 0;
}