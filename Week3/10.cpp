#include <iostream>
using namespace std;

int main(){
    // Count the number of positive values in given array
    int n; 
    cin >> n;
    int a[n]; 
    int cnt = 0; // counter 

    // Reading section for array
    for (int i = 0; i < n; i++ ){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++ ){
        if (a[i] > 0 ) {
            cnt += 1; // cnt++; 
                      // cnt = cnt + 1;
            // cout << cnt << " ";
        }
    }

    /*
    6 
    5 -23 7 -12 -1  8
    0 1   2   3  4  5 

    1   1 2  2   2  3

    3

    */

    cout << cnt << endl;



    return 0;
}


