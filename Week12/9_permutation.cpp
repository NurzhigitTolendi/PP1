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

    int a[] = {2, 1, 3};
    sort(a, a + 3);
    reverse(a, a + 3);
    // cout << prev_permutation(a, a + 3) << endl;
    // cout << prev_permutation(a, a + 3) << endl;

    do{
        for_each(a, a + 3, show);
        cout << endl;
    } while(prev_permutation(a, a + 3));

    



    return 0;
}