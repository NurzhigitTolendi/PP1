#include <iostream>
#include <sstream>

using namespace std;

int main(){
    // - [ ] stringstream (string read as: float, int, several params with spaces)

    stringstream ss;

    ss << "hello" << " 100" << " 2.5";

    string s;
    int a;
    float f;

    ss >> s >> a >> f;

    cout << s << " " << a * 2 << " " << f * 2 << endl;



    return 0;
}