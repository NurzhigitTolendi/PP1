#include <iostream>

using namespace std;

int main(){

    // - [ ] convert char to number (ascii)
    
    /*
    '5'

    10
     */

    cout << int('c') << endl;

    int num2 = int('0'); 

    cout << num2 << endl;
    int num3 = int(' '); 

    cout << num3 << endl;

    char c;
    cin >> c;

    int num = int(c) - int('0');

    cout << num * 2 << endl;



    return 0;
}