#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    // convert char to number 

    // cout << int(' ') << endl;

    char c;
    cin >> c;

    int num = int(c) - int('0'); 

    cout << num ;

    return 0;
}