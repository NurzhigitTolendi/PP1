#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Given number N and N elements

// Comparator
bool cmp(int a, int b){
    if(a > b)
        return true;
    return false;
}

bool cmp2(int a, int b){
    return a > b;
}

int main(){
    /*
        Vector - dynamic array
        4
        3 5 1 2
    */
    int n, x;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        // cin >> v[i];
        cin >> x;
        v.push_back(x);
    }

    // sort(a, a + n);
    sort(v.begin(), v.end(), cmp2);
    // reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    cout << endl;




    return 0;
}