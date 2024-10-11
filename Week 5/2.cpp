#include <iostream>
using namespace std;

int main() {
    // Multiplication table 

    int n; 
    cin >> n;

    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < n; j++ ){
            cout.width(3);
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}