#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    // Palindrome (yes, no)
    /*
        YES - abba, aba, abccbccba
        NO - abb, bba  
    */

    string s;
    cin >> s;

    bool ok = true;
    for (int i = 0; i < s.size(); i++){
        if (s[i] != s[s.size() - 1 - i]) {
            ok = false;
            break;
        } 
    }

    if (ok) {
        cout<< "YES"<<endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}