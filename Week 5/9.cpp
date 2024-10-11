#include <iostream>
using namespace std;

int main() {
    /*
    [ ] eye (1, 0)

    input: 
    3 

    output:
    0 0 1
    0 1 0 
    1 0 0 

    indexes for 2D arrays: 

    00   01   02
    10   11   12
    20   21   22
    */

   // input 
   int n;
   cin >> n;
   int a[n][n];
    // Solution 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i + j == n - 1){
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
        }
    }
    // output 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}