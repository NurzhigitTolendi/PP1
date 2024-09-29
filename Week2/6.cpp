#include <iostream>
using namespace std;

int main() {
    /*
    if () {
    // 
    }
    
    */

    int a ;
    cin >> a;

    if (a < 10) {
        cout << "number is less than 10" << endl; 
    } else if (a > 10 && a < 20) {
        cout << "number is between 10 and 20." << endl; 
    } else {
        cout << "number is bigger than 20." << endl; 
    }

    return 0;
}