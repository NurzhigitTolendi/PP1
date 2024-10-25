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

    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            cout << "NO" << endl;
            return 0;
        }
        left++;
        right--;
    }
    cout << "YES" << endl;

    return 0;
}