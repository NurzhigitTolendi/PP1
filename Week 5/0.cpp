#include <iostream>
using namespace std;

int main() {
    // Nested loops 

    /*
    if (condition) {
        if (condition) {
        
        }
    }
    
     */
    int n = 3, m = 4 ;

    // number of iterations: n * m

    for (int i = 0; i < n; i++ ){
        cout << "i = " << i << endl;
        for (int j = 0; j < n; j++ ){
            cout << "j = " << j << " ";
        }
        cout << endl;
    }
    


    return 0;
}