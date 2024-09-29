#include <iostream>

using namespace std;

int main() {
    char letter = 'A'; // 1 byte
    char letter1 = 'S';
    char letter2 = 'i';
    char letter3 = 'm';
    char letter4 = 'p';
    char letter5 = 'l';
    char letter6 = 'e';
    char letter7 = 'W';
    char letter8 = 'o';
    char letter9 = 'r';
    char letter10 = 'd'; 


    
    string word = "simple word"; // 11 
    string word1 = "example";

    cout << word << endl; 

    cout << letter1 << letter2 << letter3 << letter4 << letter5 << letter6 << " " << letter7 << letter8 << letter9 << letter10 << endl;
    
    cout << word + " " + word1 << endl;

    cout << word + word1 << endl;

    return 0;
}