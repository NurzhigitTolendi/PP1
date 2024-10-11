#include <iostream>

using namespace std;

int main(){

    // substr - sub string
    // substr(start_index, count)

    string s = "my name is kbtu";
    // string s2 = s.substr(4);
    string s2 = s.substr(4, 6);
    

    cout << s2 << endl;
    
    return 0;
}