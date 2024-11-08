#include <iostream>
#include <stack>

using namespace std;

int main() { 
    /*
        Using temporary stack to save elements of original stack
    
    */
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);

    // Creating temporary stack for output and return all elements of original stack 
    stack<int> temp;

    // Move elements from the original stack to the temporary one
    while (!stk.empty()) {
        cout << stk.top() << " ";
        temp.push(stk.top());
        stk.pop();
    }
    // Output: 30 20 10
    cout << endl;

    // Restore the original stack
    while (!temp.empty()) {
        stk.push(temp.top());
        temp.pop();
    }

    cout << endl;


    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }

    return 0;
}
