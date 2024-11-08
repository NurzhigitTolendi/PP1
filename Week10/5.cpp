#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
        Deque - Double ended queue.

        |R| <- [][][2][4][5][6][][] -> |R|

        1. add front 4
        2. add back 5
        3. add front 2
        4. add back 6

        push_back(), push_front(), pop_back(), pop_front(), front(), back(), [] or at(), size(), empty()
    */
    deque<int> box;
    box.push_front(4); // 4
    box.push_back(5);  // 4 5
    box.push_front(2); // 2 4 5
    box.push_back(6);  // 2 4 5 6

    // cout << box.size() << endl;
    // cout << box.empty() << endl;

    cout << box.front() <<  " " << box.back() << endl;
    box.pop_front();    
    box.pop_back();    
    cout << box.front() <<  " " << box.back() << endl;

    return 0;
}