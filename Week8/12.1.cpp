#include <iostream>

using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);  // 4 * 3! => 4 * 3 * 2! => 4 * 3 * 2 * 1! => 4 * 3 * 2 * 1 = 24
}

int main(){
    // - [ ] Factorial
    // 4! = 1 * 2 * 3 * 4 = 24
    int a;
    cin >> a;

    cout << factorial(a) << endl;

    return 0;
}