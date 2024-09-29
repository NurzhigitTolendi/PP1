#include <iostream>

using namespace std;

int main() {
    int b; 
    cout << "Enter number: " << endl;
    cin >> b; 

    if (b > 0 ) {
        cout << "the number is positive."; 
    } else {
        if (b < 0) {
            cout << "the number is negative" << endl;
        }
        else {
            cout << "the number is equal to 0." << endl;
        }
    }
    

    return 0; 
}