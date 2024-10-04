#include <iostream>

using namespace std;

int main(){
    /*
    - [ ] max element in matrix

    in:
    3
    5 2 6
    7 5 8 
    1 9 3 

    out:
    9 3 2

    indexes:
    00 01 02
    10 11 12
    20 21 22
    */

    freopen("in.txt", "r", stdin);

    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int row = 0, col = 0;
    int maxi = a[row][col];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > maxi){
                maxi = a[i][j];
                row = i;
                col = j;
            }            
        }
    }

    cout << maxi << " " << row + 1 << " " << col + 1 << endl;

    

    return 0;
}