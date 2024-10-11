#include <iostream>
using namespace std;

int main() {
    // max element in 2D array

    /*     
    input: 
    3
    5 2 3 
    7 5 2
    1 8 4

    output:
    8

    indexes for 2D arrays: 

    00   01   02
    10   11   12
    20   21   22
    
    */

    freopen("in.txt", "r", stdin);

   int n;
   cin >> n;
   int a[n][n];

   for (int i = 0; i < n; i++ ){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
   }

   // Calculations (your solution for task)

    int maxi = a[0][0]; 
    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < n; j++){
            if (a[i][j] > maxi) {
                maxi = a[i][j]; 
            }
        }
   }



   // output
    // cout << endl;
    cout << maxi << endl;

    return 0;
}
