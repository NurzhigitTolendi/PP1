#include <iostream>
using namespace std;

int main() {
    // Nested loops
    int n, m, p;
    n = 3, m = 4; 

    /*
    if (condition) {
        if (condition) {

        } else {
        
        }
    }
     */

    // number of iteration: n * m 

    for (int i = 0; i < n; i++ ) {
        cout << "i = " << i << endl; 
        for (int j = 0; j < m; j++ ) {
            cout << "j = " << j << " "; 
        }
        cout << endl;
    }

    



    return 0;
}