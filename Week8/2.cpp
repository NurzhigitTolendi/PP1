#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // Built-in functions
    // - [ ] tolower, toupper

    int a[] = {5, 2, 4, 1};
    string s = "kbR5tu";

    sort(a, a + 4);
    reverse(a, a + 4);

    sort(s.begin(), s.end());


    for(int i = 0; i < s.size(); i++)
        cout << s[i] << " ";


    return 0;
}