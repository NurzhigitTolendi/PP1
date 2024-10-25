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

    for (int i = 0; i < s.size(); i++){
        if (s[i] != s[s.size() - 1 - i]) {
            cout << "NO" << endl;
            return 0;
        } 
    }

    cout << "YES" <<endl;

    return 0;
}