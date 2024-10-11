#include <iostream>

using namespace std;

int main(){

    // - [ ] What is string

    char c = 't';

    string word = "kbtu";
    string s(" site");

    word += s;

    string word2 = "kbtu";

    string s2 = word2;


    cout << word2.size() << " " << word2.length() << endl;
    cout << (word == word2) << endl;
    cout << word << endl;

    for(int i = 0; i < word2.size(); i++){
        cout << word2[i] << " ";
    }

    return 0;
}