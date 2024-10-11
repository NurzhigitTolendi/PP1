#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    // - [ ] s.begin(), s.end() -- addresses, not exact values of string

    string s = "my name is kbtu"; // ' ' = 32

    cout << *s.begin() << " " << *(s.end() - 1) << endl;

    sort(s.begin(), s.end());

    cout << s << endl;
    
    reverse(s.begin(), s.end());

    cout << s << endl;




    return 0;
}
