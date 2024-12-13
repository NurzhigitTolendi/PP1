#include <iostream>
using namespace std;

/*
    Recursion is a function that calls itself to solve the problem

    1) function calls itself
    2) base case where function stops 
    3) there must be changes in direction of the base case 
    
*/

int factorial(int n) {
    if (n == 0) return 1; 
    return n * factorial(n - 1); 
}

int main() {
    int num;
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
