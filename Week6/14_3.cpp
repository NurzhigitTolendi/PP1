#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - [ ] Palindrome (yes, no)

    /*
        YES - abba, abbcbba, aba, acca
        NO - abb, cca, abbbd
    */

    /*

        abcba
        a == a?
        b == b?
        c

        
    */
    string s;
    cin >> s;

    string tmp = s;
    reverse(s.begin(), s.end());

    if(tmp == s)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;





    return 0;
}