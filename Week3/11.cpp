#include <iostream>
using namespace std;

int main(){
    // Linear search of k in given array 
    int n, k; 
    cin >> n;
    int a[n]; 

    // Reading section for array
    for (int i = 0; i < n; i++ ){
        cin >> a[i];
    }
    cin >> k;

    for (int i = 0; i < n; i++ ){
        if (a[i] == k) {
            cout << i << " ";
        }
    }

    /*
    5 
    4 -3 7 2 10 
    2 

    3
    
     */

    return 0;
}


