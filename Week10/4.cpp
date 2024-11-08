#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    /*
        Queue - horizontal box.
        FIFO - First In First Out

        |R| <- [4][5][2][6][][]

        1. add 4
        2. add 5
        3. add 2
        4. get item // 4, delete
        5. get item // 5, delete
    */
    queue<int> box;
    box.push(4);
    box.push(5);
    box.push(2);
    box.push(6);

    while(!box.empty()) {
        cout << box.front() << " ";
        box.pop();
    }

    return 0;
}