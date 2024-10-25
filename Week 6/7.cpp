#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // find() function
    // find(target_string, starting_index = 0)

    string s = "my name is kbtu";
    string target = "dsfgs";

    cout << s.find(target) << endl;

    int found = s.find(target);

    cout << found << endl;

    if (found != -1) {
        cout << "Found: " << found << endl;
    } else {
        cout << "Not Found!" << endl;
    }
    

    return 0;
}