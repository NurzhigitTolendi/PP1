#include <iostream>

using namespace std;

int main(){

    // - [ ] find function
    // find(target_string, starting_index=0);

    string s = "my namen is name kbnametu";
    string target = "name";     

    int found = s.find(target);
    int cnt = 0;

    while(found != string::npos){ // (found != -1) string::npos <=> -1
        cnt++;
        found = s.find(target, found + target.size());
    }

    cout << cnt << endl;




    return 0;
}