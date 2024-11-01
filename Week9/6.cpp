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
    v.push_back(7);

    v.insert(v.begin() + 1, 8);
    // v.erase(v.begin());
    // v.erase(v.begin(), v.begin() + 2);
    
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    /* 
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
        */
    
    cout << endl;

    return 0;
}