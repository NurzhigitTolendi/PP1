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
        ((()
        ())
        ())(
        )()

        []
        []
        [(]
        [(]

    */
    string s;
    cin >> s;

    stack<char> box;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            box.push('(');
        } else {
            if(box.empty()) {
                cout << "NO" << endl;
                return 0;
            }
            box.pop();
        }
    }

    if(box.empty())
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;



    return 0;
}