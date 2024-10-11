#include <iostream>
using namespace std;

int main() {
    /* Symmetric matrix 

    input: 
    3 
    5 2 6
    2 4 9 
    6 9 3 

    output:
    YES

    input:
    3 
    5 2 7
    2 4 9 
    6 9 3 

    output:
    NO

    indexes for 2D arrays: 

    00   01   02
    10   11   12
    20   21   22
    */
   // input:

    freopen("in.txt", "r", stdin);

   int n;
   cin >> n;
   int a[n][n];

    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < n; j++ ){
            cin >> a[i][j];
        }
    }

    // Solution:
    bool isSym = true; 
    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < n; j++ ){
            if (a[i][j] != a[j][i] ) {
                cout << "NO" << endl;
                isSym = false;
                break;
            }
        }
        if (isSym == false) {
            break;
        }
    }

    if (isSym == true) {
        cout << "YES" << endl;
    }
    return 0;
}