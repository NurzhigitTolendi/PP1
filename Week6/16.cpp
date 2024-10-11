#include <iostream>
#include <sstream>

using namespace std;

int main(){
    // - [ ] stringstream (string read as: float, int, several params with spaces)

    stringstream ss;
    int a;
    
    ss << "100";
    ss >> a;

    cout << a * 2 << endl;



    return 0;
}