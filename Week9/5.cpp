#include <iostream>
#include <vector>

using namespace std;


int main(){
    /*
        Vector - dynamic array

        erase(exact_address); 
        erase(start_address, end_address); [start_address, end_address)

        4
        3 5 1 2
    */
    int a[4] = {3, 4, 1, 5};
    vector<int> v(a, a + 4);

    // v.erase(v.begin() + 1); // erase/remove/delete...
    v.erase(v.begin() + 1, v.begin() + 3); // erase/remove/delete...


    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    cout << endl;




    return 0;
}