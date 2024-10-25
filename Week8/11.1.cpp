#include <iostream>

using namespace std;


float my_pow(int base, int exp){
    float res = 1;
    for(int i = 1; i <= abs(exp); i++){ // abs => |exp|
        res *= base;
    }
    if(exp < 0)
        return 1 / res;
    return res;
}

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