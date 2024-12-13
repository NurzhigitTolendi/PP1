#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1; 
    return a * power(a, b - 1); 
}

int main() {
    int base, exponent;
    cin >> base >> exponent;
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    return 0;
}
