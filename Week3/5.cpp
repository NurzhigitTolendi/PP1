#include <iostream> 
using namespace std;

int main() {
    // int a[10]; 
    // Read n numbers for an array
    int n;
    cin >> n;
    int a[n];

    // Reading section for array
    for (int i = 0; i < n; i++ ){
        cin >> a[i];
    }

// Calculations 

    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

// output
    return 0; 
}