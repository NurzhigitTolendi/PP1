#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
        Bracket validation
        (2 * {4 + 4} / 7)

        YES
        (){}
        (){}()
        ({({})})
        ({}())

        

        NO
        {()
        ({)}
        ()}{
        }()

        []
        []
        []
        [{]
        [(]

    */
    string s;
    cin >> s;

    stack<char> box;
    for(int i = 0; i < s.size(); i++){
        char cur_bracket = s[i];
        if(cur_bracket == '(' || cur_bracket == '{'){
            box.push(s[i]);
        } else {
            if(box.empty()) {
                cout << "NO" << endl;
                return 0;
            }

            char last_added = box.top();
            if((cur_bracket == ')' && last_added != '(') ||
               (cur_bracket == '}' && last_added != '{')){
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