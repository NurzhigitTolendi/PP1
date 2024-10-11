#include <iostream>
using namespace std;

int main() {
    // 2D arrays 

    /*

    input: 
    3
    5 2 3 
    7 5 8
    1 8 4

    output:
    5 2 3
    7 5 8
    1 8 4

    indexes for 2D arrays: 

    00   01   02
    10   11   12
    20   21   22
    
    */
 
   // input 

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




   // output
    // cout << endl;

    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
   }


    return 0;
}