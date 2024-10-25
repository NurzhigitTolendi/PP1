#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    // What is string 
    // array of chars 

    char c = 't';

    string word = "kbtu";
    string s(" site");

    string word2 = "kbtu";
    bool isEqual = (word == word2);

    if (isEqual == 1) {
        cout << "Words are the same." << endl;
    } else {
        cout << "Words are not the same." << endl;
    }

    word += s; // word = word + s; - string concatenation, new word = "kbtu site"

    bool isEqual2 = (word == word2);

    if (isEqual2 == 1) {
        cout << "Words are the same." << endl;
    } else {
        cout << "Words are not the same." << endl;
    }
    cout << word << endl;

    return 0;
}