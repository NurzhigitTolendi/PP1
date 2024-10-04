#include <iostream>

using namespace std;

int main(){
    // Multiplication table 
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout.width(3); // printf()
            cout << i * j << " ";
        }
        cout << endl;
    }

    

    return 0;
}