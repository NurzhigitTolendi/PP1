#include <iostream>
using namespace std;

int main(){
    // Built-in functions
    // isdigit, isalpha, isalnum, ispunct

    string s = "k3%B^123Tu";

    for (int i = 0; i < s.size(); i++){
        if (ispunct(s[i])) {
            cout << s[i] << " ";
        }
    }
    
    return 0;
}