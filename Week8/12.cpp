#include <iostream>

using namespace std;

int factorial(int n){
    int res = 1;
    for(int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}

int main(){
    // - [ ] Factorial
    // 4! = 1 * 2 * 3 * 4 = 24
    int a;
    cin >> a;

    cout << factorial(a) << endl;

    return 0;
}