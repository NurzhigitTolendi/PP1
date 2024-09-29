#include <iostream>
using namespace std;

int main(){
    // Sum of all elements of array
    int n; 
    cin >> n;
    int a[n]; 

    int sum = 0;
    // Reading section for array
    for (int i = 0; i < n; i++ ){
        cin >> a[i];
    }

    // Make some calculations
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    /*
    [ 3  -6  5  7 ]

    0 + 3 = 3
    3 + (-6) = -3
    -3 + 5 = 2
    2 + 7 = 9
    
     */

    cout << sum;

}