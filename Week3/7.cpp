#include <iostream>
using namespace std;

int main() {
    // Show even/odd elements of an array
    int n; 
    cin >> n;
    int a[n]; 

    // Reading section for array
    for (int i = 0; i < n; i++ ){
        cin >> a[i];
    }

    // Show even elements
    /* for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    } */
    
    /*
    3 % 2 = 1
    -6 % 2 = 0
    4 % 2 = 0
    7 % 2 = 1
    */

   // Show odd numbers of an array
   for (int i = 0; i < n; i++){
        if (a[i] % 2 != 0) {
            cout << a[i] << " ";
        }
    } 

    return 0;
}