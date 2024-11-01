#include <iostream>
using namespace std;

float square(float n); // Function declaration 

int main() {

    int a;
    cin >> a;

    cout << square(a) << endl;

    return 0;
}

// Function definition 
float square(float n) {
    return n * n;
}