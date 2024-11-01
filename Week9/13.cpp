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
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    map<string, float> m;
    string s;
    float f;
    for(int i = 0; i < n; i++){
        cin >> s >> f;
        m[s] = f;
    }
    
    pair<string, float> maxStudent = findMax(m);

    cout << maxStudent.first << " " << maxStudent.second << endl;

    showMap(m);

   
    return 0;
}