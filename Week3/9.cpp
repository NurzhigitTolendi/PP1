#include <iostream>
using namespace std;

int main(){
    // Show indexes of odd/even numbers
    int n; 
    cin >> n;
    int a[n]; 

    // Reading section for array
    for (int i = 0; i < n; i++ ){
        cin >> a[i];
    }

    // Show indexes of even numbers
     for (int i = 0; i < n; i++ ){
       if (a[i] % 2 == 0) {
        cout << i << " ";
       }
    } 

    /*
    4
    3 -10 2 5
    0  1  2 3 

    1 2
    */

  /*  for (int i = 0; i < n; i++ ){
       if (a[i] % 2 != 0) {
        cout << i << " ";
       }
    } */
    /*
    4
    3 -10 2 5
    0  1  2 3 

    0 3
    */

    return 0;
}


