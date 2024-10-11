#include <iostream>
using namespace std;

int main() {
    // Nested loops 
    int n = 3, m = 4, p = 3 ;

    // number of iterations: n * m

    for (int i = 0; i < n; i++ ){
        cout << "i = " << i << endl;

        for (int j = 0; j < n; j++ ){
            cout << "j = " << j << endl;

            for (int k = 0; k < p; k++ ){
                cout << "k = " << k << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    


    return 0;
}