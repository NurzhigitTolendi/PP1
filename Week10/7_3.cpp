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
        )()()()()()
    */
    string s;
    cin >> s;

    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') cnt++;
        if(s[i] == ')') {
            cnt--;
            if(cnt < 0){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    if(cnt == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}