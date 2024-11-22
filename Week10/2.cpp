#include <iostream>
#include <stack>

using namespace std;

int main(){
    /*
        Stack - vertical box.
        LIFO - Last In First Out

        1. add 4
        2. add 5
        3. add 2
        4. get item // 2, delete
        5. get item // 5, delete

        []
        [2]
        [5]
        [4]


        [2][5][4]
    */
    stack<int> box;
    // vector<int> v;
    box.push(4);
    box.push(5);
    box.push(2);

    while(!box.empty()) { // box.empty() == false
        cout << box.top() << " ";
        // v.push_back(box.top());
        box.pop();
    }

    cout << endl;
    cout << box.size();


    return 0;
}