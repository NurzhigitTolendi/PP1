#include <iostream>
#include <algorithm> 
#include <sstream>
using namespace std;

int main() {
    // stringstream - string read as: int, float, string, etc.
    stringstream ss; 

    ss << "hello" << " 100" << " 2.5";

    string s;
    int a;
    float f;

    ss >> s >> a >> f;

   cout << s << " " << a << " " << f << endl;

   // cout << s;

    return 0;
}