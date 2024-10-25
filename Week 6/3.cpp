#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    char c = 'c';

    string word = "kbtu";
    string s(" site");

    word = word + s; // word = "kbtu site" 

    string word2 = "kbtu";

    cout << word.size() << " " << word.length() << endl;
    
    for (int i = 0; i < word2.size(); i++){
        cout << word2[i] << " ";
    }

    return 0;
}