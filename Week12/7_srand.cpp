#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

void show(int n){
    cout << n << " ";
}

int gen(){
    return rand() % 25 + 2000;
}

int main(){
    srand(time(0));

    // - [ ] generate(begin, end, gen_func)
    vector<int> v(10);

    generate(v.begin(), v.end(), gen);
    for_each(v.begin(), v.end(), show);

    return 0;
}