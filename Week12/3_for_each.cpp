#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void show(int n){
    cout << n << " ";
}

int main(){
    // - [ ] fill (begin, end, value)
    // - [ ] for_each(begin, end, function)

    vector<int> v(10);

    fill(v.begin(), v.end(), 4);
    for_each(v.begin(), v.end(), show);

    // for(int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    

    return 0;
}