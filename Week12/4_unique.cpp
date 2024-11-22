#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
1) 2, 2, 3, 4, 4, 5
2) 2, 3, 4, 5, 4, 5
*/

int main(){
    // - [ ] unique (begin, end)
    int a[] = {2, 2, 3, 4, 4, 5};
    vector<int> v(a, a + 6);

    vector<int>::iterator bound = unique(v.begin(), v.end());
    vector<int>::iterator begin = v.begin();
    
    while(begin != bound){
        cout << *begin << " ";
        begin++;
    }

    return 0;
}