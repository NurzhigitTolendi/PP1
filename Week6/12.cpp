#include <iostream>

using namespace std;

int main(){


    // - [ ] append, insert - functions
    
    string s = "my name";

    s.append(" is"); // s += " is";

    s.insert(2, "kbtu"); // s + "kbtu" + s2

    
    // s.insert(s.size(), "kbtu");
    

    cout << s << endl;
    



    return 0;
}