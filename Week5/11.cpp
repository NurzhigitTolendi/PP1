#include <iostream>

using namespace std;

int main(){
    /*
    - [ ] symmetric matrix

    in:
    3
    5 2 6
    2 4 9 
    6 9 3 

    out:
    YES

    in:
    3
    5 2 7
    2 5 9 
    6 9 3 

    out:
    NO

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
    bool flag = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]){
                cout << "NO" << endl;
                flag = false; // for loop "j"
                break;
            }
        }
        if(flag == false)
            break; // for loop "i"
    }

    if(flag == true)
        cout << "YES" << endl;


    

    return 0;
}