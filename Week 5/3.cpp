#include <iostream>
using namespace std;

int main() {
    // 2D arrays 

    /*
    int a[3]; 
    [] [] [] 

    int arr[3][3]

    [] [] []
    [] [] []
    [] [] []
    
    data_type var_name[number_of_rows][number_of_columns]

    indexes for 2D arrays: 

    00   01   02
    10   11   12
    20   21   22
    
    */

   int a[3][3] = {
       {5, 2, 3}, 
       {6, 1, 8},
       {7, 4, 9}
   };

    // cout << a << endl; // 0x345fdffc20
    // cout << a[0]; // 0xe66ddff690 
    cout << a[0][0] << endl;
    cout << a[1][2] << endl;
    cout << a[2][1] << endl;

    a[2][1] = 10;

    cout << endl;
    cout << a[2][1] << endl;

    return 0;
}