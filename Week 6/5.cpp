#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // s.front(), s.back()

    string s = "my name is kbtu";

    cout << s.front() << " " << s.back() << endl;
    cout << s[0] << " " << s[s.size() - 1] << endl;
    cout << *s.begin() << " " << *(s.end() - 1) << endl;

    return 0;
}