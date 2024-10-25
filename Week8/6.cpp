#include <iostream>

using namespace std;

int sum(int n, int m){ // n, m - parameters; n = 2; m = 3;
    int result = n + m;
    return result;
}

int main(){
    /*
        What is a function?
        Function - a block of code to solve some subproblem.
        Function - list of instructions to solve subtask.

        Structure of creation;

        return_type func_name(parameters?){
            body of the function;
        }
    */

    int a = 2, b = 3;

    int r = sum(a, b); // function calling; a, b = arguments; sum(2, 3);

    cout << r << endl;

    return 0;
}