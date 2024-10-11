#include <iostream>

using namespace std;

int main(){
    // - [ ] Palindrome (yes, no)

    /*
        YES - abba, abbcbba, aba, acca
        NO - abb, cca, abbbd
    */

    /*

        abcccba
        a == a?
        b == b?
        c

        
    */
    string s;
    cin >> s;

    bool ok = true;
    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] != s[s.size() - 1 - i]){
            ok = false;
            break;
        }
    }

    if(ok)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;





    return 0;
}