#include <iostream>

using namespace std;

int main(){
    // Built-in functions
    // - [ ] tolower(char), toupper(char)

    string s = "kBTu";

    for(int i = 0; i < s.size(); i++)
        cout << (char)toupper(s[i]);

    cout << endl;


    return 0;
}