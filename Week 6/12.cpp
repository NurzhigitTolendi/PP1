#include <iostream>
using namespace std;

int main(){ 
    // append, insert functions 
    // append(string) 
    // insert(start_index, string)

    string s = "my name is kbtu";
    s.append(" name");
    s.insert(2, "kbtu");

    cout << s << endl;
    
    return 0;
}