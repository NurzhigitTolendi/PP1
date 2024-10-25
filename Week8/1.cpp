#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // Built-in functions
    // sort, reverse
    // sort(start_address, end_address); [start_address, end_address)

    int a[] = {5, 2, 4, 1};

    sort(a, a + 4);
    reverse(a, a + 4);

    for(int i = 0; i < 4; i++)
        cout << a[i] << " ";


    return 0;
}