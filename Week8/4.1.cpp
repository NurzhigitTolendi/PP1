#include <iostream>

using namespace std;

int main(){
    // Built-in functions
    // - [ ] isalpha, isdigit, isalnum, ispunct

    string s = "k4%B^123T4u"; 
    // 4 + 1 + 2 + 3 = 10
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])) { // '4' => 4
            // 48 = 0, 49 = 1, 50 = 2, 51 = 3, 52 = 4
            int digit = s[i] - '0'; // 52 - 48 = 4
            sum += digit;
        }
    }
            

    cout << sum << endl;


    return 0;
}