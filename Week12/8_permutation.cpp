#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

void show(int i){
    cout << i << " ";
}

int main(){
    // - [ ] next_permutation, prev_permutation
    // Lexicographical order

    /*
    1 2 3
    1 3 2
    2 1 3
    2 3 1
    3 1 2
    3 2 1

    3! = 6
    4! = 24
    5! = 120
    */

    int a[] = {2, 3, 1, 4};
    // int a[] = {4, 3, 2, 1};
    sort(a, a + 4);
    // cout << next_permutation(a, a + 3) << endl;
    // cout << next_permutation(a, a + 3) << endl;

    do{
        for_each(a, a + 4, show);
        cout << endl;
    } while(next_permutation(a, a + 4));

    return 0;
}