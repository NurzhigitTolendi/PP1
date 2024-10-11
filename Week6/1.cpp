#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int a[] = {5, 3, 2, -1}; 

    sort(a, a+5);

    for(int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }

    return 0;
}