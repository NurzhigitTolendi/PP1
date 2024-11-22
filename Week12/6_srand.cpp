#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    srand(time(0)); // srand(time(NULL));
    
    // cout << RAND_MAX << endl; // [0-2147483647]

    // cout << rand() << endl;
    // cout << rand() % 10 << endl; // [0-9]
    // cout << rand() % 10 + 1 << endl; // [1-10]
    // cout << rand() % 1000 << endl; // [0-999]
    cout << rand() % 900 + 100 << endl; // [100-999]
    // cout << rand() % 4 + 1 << endl; // [1-4]
    // cout << rand() % 10 + 3 << endl; // [3-13]
    // cout << rand() % 25 + 2000 << endl; // [2000-2024]


    return 0;
}