#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*
       Vector - dynamic array

       vector<data_type> var_name(size?);
    */
    int a[4] = {3, 4, 1, 5}; // static, fixed array
    // a[4] = 8; - error? out of index

    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(5);

    // v.clear();

    // cout << (v.size() == 0) << endl;
    // cout << v.empty() << endl;
    // cout << v.size() << endl;
    // cout << v[0] << " " << v[v.size() - 1]<< endl;
    // cout << v.front() << " " << v.back()<< endl;
    // cout << *v.begin() << " " << *(v.end() - 1)<< endl;

    for(int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
        // cout << v[i] << " ";
    
    cout << endl;



    return 0;
}