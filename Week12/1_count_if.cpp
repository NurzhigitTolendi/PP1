#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/*
    <algorithm> library 

    Examples of problems solved by <algorithm>:
    Counting elements by condition: count_if().
    Sorting an array: sort().
    Finding an element: find().
    Shuffling elements: shuffle().
    Permutation of elements: rotate(), next_permutation().
    Removing duplicates: unique().
    Filling with values: fill().

    count_if (begin, end, function)
*/

bool isEven(int n){
    if(n % 2 == 0)
        return true;
    return false;
}

// int my_count_if(int *begin, int *end);

int my_count_if(vector<int>::iterator b, vector<int>::iterator e){
    int cnt = 0;
    while(b != e){
        if(isEven(*b))
            cnt++;
        b++;
    }
    return cnt;
}

int main(){
    // sort(begin, end, function)
    // - [ ] count_if (begin, end, function)
    int a[] = {3, 2, 8, 4};
    vector<int> v(a, a + 4);
    
    // int res = count_if(a, a + 4, isEven);
    // int res = count_if(v.begin(), v.end(), isEven);
    int res = my_count_if(v.begin(), v.end());

    cout << res << endl;

    return 0;
}