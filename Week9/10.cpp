#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;


int main(){
    /*
        Map - key / value container
        Each value inside of map is - pair
    */

    map<string, float> m;
    m["24B111"] = 6.8; 
    m["24B222"] = 9;
    m["24B333"] = 7.5;
    m["24B222"] = 10;

    pair<string, float> p1("24B000", 7.5);
    m.insert(p1);

    cout << m.size() << endl;

    map<string, float>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }



    return 0;
}