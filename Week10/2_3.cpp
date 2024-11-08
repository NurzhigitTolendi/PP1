#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    stack<int> stk;
    stk.push(30);
    stk.push(10);
    stk.push(20);
    stk.push(40);

    // Put all elements of the stack into the vector 
    vector<int> vec;
    while (!stk.empty()) {
        vec.push_back(stk.top());
        stk.pop();
    }
    // 40 20 10 30

    // Sort all elements in increasing order 
    sort(vec.begin(), vec.end());
    // 10 20 30 40 

    // Return sorted elements into stack from vector using for loop 
    for (int i = vec.size() - 1; i >= 0; --i) {
        stk.push(vec[i]);
    }
    // 40 30 20 10

    // Show all elements of the stack 
    cout << "Sorted elements of the stack: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    // Output: 10 20 30 40

    return 0;
}
