#include <iostream>
using namespace std;

int main() {
    
    int b[6]; 
    float c[3];

    char chars[] = {'e', 'n', 'g', 'l', 'i', 's', 'h'};
    string word = "english"; 

    for (int i = 0; i < word.size(); i++ ){
        cout << word[i] << " ";
    }

    return 0;
}