#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
        Bracket validation
        (2 * (4 + 4) / 7)

        YES
        (())
        ()()
        ((()))
        (()())

        NO
        (()
        ())
        ())(
        )()
    */
    string s;
    cin >> s;

    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') cnt1++;
        if(s[i] == ')') {
            cnt2++;
            if(cnt2 > cnt1){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    if(cnt1 == cnt2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}