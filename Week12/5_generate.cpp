#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void show(int n){
    cout << n << " ";
}

int cnt = 0;
int gen(){
    return cnt++;
}

int main(){
    // - [ ] generate(begin, end, gen_func)
    vector<int> v(10);

    generate(v.begin(), v.end(), gen);
    for_each(v.begin(), v.end(), show);



    return 0;
}