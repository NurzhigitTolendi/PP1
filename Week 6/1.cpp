#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[] = {5, 2, 4, -1};

    for (int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a, a+4);

    for (int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }
    cout<<endl;

    reverse(a, a+4);
    for (int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }

    return 0;
}