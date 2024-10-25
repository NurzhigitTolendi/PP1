#include <iostream>

using namespace std;


float my_pow(int base, int exp){
    float res = 1;
    if(exp > 0){
        for(int i = 1; i <= exp; i++){
            res *= base;
        }
        return res;
    } else {
        exp *= -1;
        for(int i = 1; i <= exp; i++){ 
            res *= base;
        }
        return 1 / res;
    }
}  

/* int my_pow(int base, int exp){
    int res = 1;
    
        for(int i = 1; i <= exp; i++){
            res *= base;
        }
        return res;
    
} */

int main(){
    //  - [ ] Function Power
    // pow(base, exp)
    // pow(2, 3) => 2 ^ 3 = 1 * 2 * 2 * 2 = 8
    // pow(2, -3) => 2 ^ -3 = 1 / 2^3 = 1 / 8 = 0.125

    int a, b;
    cin >> a >> b;

    cout << my_pow(a, b) << endl;

    return 0;
}