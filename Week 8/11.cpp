#include <iostream>
using namespace std;

int factorial(int a){
    int res = 1;
    for (int i = 1; i <= a; i++){
        res *= i;
    }
    return res;
}


int main(){
    // Factorial 
    // 4! = 1 * 2 * 3 * 4 = 24 

    int n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}