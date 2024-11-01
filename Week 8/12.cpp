#include <iostream>
using namespace std;

int factorial(int a){
    if (a <= 1) return 1;
    return a * factorial(a - 1); // factorial(3) => factorial(2) => factorial(1) 
}


int main(){
    // Factorial 
    // 4! = 1 * 2 * 3 * 4 = 24 

    int n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}