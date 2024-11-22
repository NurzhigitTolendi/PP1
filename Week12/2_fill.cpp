#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    // - [ ] fill (begin, end, value)
    vector<int> v(10);

    fill(v.begin(), v.end(), 4);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    

    return 0;
}