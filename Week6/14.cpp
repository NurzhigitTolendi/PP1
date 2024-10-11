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

    int cnt = 0;
    for(int i = 0; i < s.size() / 2; i++){
        // cout << i << " " << s.size() - 1 - i << endl;
        if(s[i] == s[s.size() - 1 - i])
            cnt++;
    }

    if(cnt == s.size() / 2) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;




    return 0;
}