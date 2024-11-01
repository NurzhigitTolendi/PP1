#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;


void showMap(map<string, float> m){
    map<string, float>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << "--->" << (*it).second << endl;
    }
}


pair<string, float> findMax(map<string, float> m){
    pair<string, float> student(m.begin()->first, m.begin()->second);
    map<string, float>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if(it->second > student.second){
            student = *it;
        }
    }
    return student;
}


int main(){
    map<string, float> m;
    m["24B111"] = 6.8; 
    m["24B222"] = 9;
    m["24B333"] = 7.5;
    m["24B222"] = 10;
    pair<string, float> p1("24B000", 7.5);
    m.insert(p1);

    pair<string, float> maxStudent = findMax(m);

    cout << maxStudent.first << " " << maxStudent.second << endl;

    showMap(m);

   
    return 0;
}