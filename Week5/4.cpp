#include <iostream>

using namespace std;

int main(){
    /*
    in:
    3
    5 2 6 
    7 5 8 
    1 9 3 

    out:
    5 2 6 
    7 5 8 
    1 9 3 

    indexes:
    00 01 02
    10 11 12
    20 21 22
    */

    freopen("in.txt", "r", stdin);

    // Read data
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    // Some calculations (task solution)

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    

    return 0;
}