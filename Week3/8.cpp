#include <iostream>
using namespace std;

int main(){
    // Let's show the numbers in even/odd positions from given array
    int n; 
    cin >> n;
    int a[n]; 

    // Reading section for array
    for (int i = 0; i < n; i++ ){
        cin >> a[i];
    }

    // Show numbers in even positions
     for (int i = 0; i < n; i++){
        if (i % 2 == 0) {
            cout << a[i] << " ";
         }
    } 

    /*
    4 
    3 -10 2 5 

    0  1  2 3

    3 2
    */

   // Show numbers in odd positions
   /* for (int i = 0; i < n; i++){
        if (i % 2 != 0) {
            cout << a[i] << " ";
         }
    } */
    /*
    4 
    3 -10 2 5 

    0  1  2 3

    -10 5
    */

    return 0;
}


