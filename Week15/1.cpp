#include <iostream>
using namespace std;

int factorialIterative(int n) {
    int result = 1; 
    for (int i = 1; i <= n; i++) {
        result *= i; 
    }
    return result;
}

int main() {
    int num;
    cin >> num;
    cout << "Factorial of " << num << " is " << factorialIterative(num) << endl;
    return 0;
}
