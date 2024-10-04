#include <iostream>

using namespace std;

int main(){
    /*
    - [ ] max element in matrix

    in:
    3
    5 2 66 
    7 5 8 
    1 9 3 

    out:
    9

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

    int maxi = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // if(i == 0 && j == 0)
            //     continue;
            if(a[i][j] > maxi){
                maxi = a[i][j];
            }            
        }
    }

    cout << maxi << endl;

    

    return 0;
}