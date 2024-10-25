#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // s.begin() ,  s.end() 

    string s = "my name is kbtu";

    cout << *s.begin() << " " << *(s.end() - 1) << endl;

    sort(s.begin(), s.end());

    cout << s << endl;

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}