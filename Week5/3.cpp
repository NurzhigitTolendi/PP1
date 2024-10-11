#include <iostream>

using namespace std;

int main(){
    /*
        2D array

        data_type var_name[number_of_rows][number_of_columns];

        int a[3][3];
        [5][2][6]
        [7][5][8]
        [1][9][3]

        // 1D array
        int a[3];
        [][][]

        indexes of 2D array:
        00   01   02
        10   11   12 
        20   21   22
    
    */

    // int a[3][3];
    int a[3][3] = {
        {5, 2, 6},
        {7, 5, 8},
        {1, 9, 3}
    };

    cout << a[0][0] << endl;
    cout << a[1][2] << endl;
    cout << a[2][1] << endl;

    a[2][2] = a[2][2] * 3;
    
    cout << a[2][2] << endl;
    

    return 0;
}