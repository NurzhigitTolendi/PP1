#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
        Deque - Double ended queue.

        |R| <- [][][2][4][5][6][7][] -> |R|

        1. add front 4
        2. add back 5
        3. add front 2
        4. add back 6
    */
    deque<int> box;
    box.push_front(4); // 4
    box.push_back(5); // 4 5
    box.push_front(2); // 2 4 5
    box.push_back(6); // 2 4 5 6 
    box.push_back(7); // 2 4 5 6 7

    cout << "Element with index 2: " << box[2] << std::endl;  // 5
    cout << "Element with index 2(using at): " << box.at(2) << std::endl;  // 5

    deque<int>::iterator it;
    for (it = box.begin(); it != box.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    for (int i = 0; i < box.size(); ++i) {
        cout << box[i] << " ";
    }
    cout << endl;

    return 0;
}