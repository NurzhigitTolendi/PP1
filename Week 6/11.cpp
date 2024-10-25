#include <iostream>
using namespace std;

int main(){ 
    // erase function 
    // erase(start_index, count)

    string s = "my name is kbtu";
    s.erase(8, 3);

    cout << s << endl;

    return 0;
}