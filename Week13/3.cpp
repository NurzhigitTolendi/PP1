#include <iostream>

using namespace std;

int main(){
    int a[3] = {0};
    cout << a << " " << &a << endl;

    int *p = a;
    *p = 4;

    p++;
    *p = 2;

    p++;
    *p = -1;



    for(int *i_p = a; i_p != (a + 3); i_p++)
        cout << *i_p << " ";

    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout << *it << endl;
    // }

    // for(int i = 0; i < 3; i++)
    //     cout << a[i] << " ";

    cout << endl;

    return 0;
}