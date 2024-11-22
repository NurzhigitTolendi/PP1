#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // rotate(begin, middle, end)
    vector<int> v = {10, 20, 30, 40, 50};

    rotate(v.begin(), v.begin() + 2, v.end());

    for (int i = 0; i < v.size(); i++) { 
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
