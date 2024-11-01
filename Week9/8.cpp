#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main(){
    /*
        Set - unique values; auto sorted by inc;
    */

    set<int> s;
    s.insert(4);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(3);

    // s.erase(3); // by the value
    s.erase(s.begin()); // by the address

    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }


    return 0;
}