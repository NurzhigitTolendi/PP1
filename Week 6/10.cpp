#include <iostream>
using namespace std;

int main(){ 
    // substr - sub string 
    // substr(start_index, count)

    string s = "my name is kbtu";
    string s1 = s.substr(1, 6);

    cout << s << endl;
    cout << s1 << endl;

    return 0;
}