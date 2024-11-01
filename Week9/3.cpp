#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*
       Vector - dynamic array

       vector<data_type> var_name(size?);

       adding elements from another array into vector
    */

    int a[4] = {3, 4, 1, 5}; // static, fixed array
    vector<int> v(a, a + 4);


    for(int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    
    cout << endl;



    return 0;
}