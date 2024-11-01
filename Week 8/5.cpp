#include <iostream>
using namespace std;


int sum(int n, int m){
    return n + m;
}

float square(float n){
    return n * n;
}


int main() {
    /*
        What is function?

        Function is a block of code that was made to solve some subtask;
        Function is a list of instructions to solve some subproblem;

    Structure :

    return_type function_name(parameters){
        // body of the function
    }
    
    
    */

   // int a, b;
   // cin >> a >> b;

   // int c = sum(a, b); // function calling , a and b - parameters
   // cout << c << endl;

   cout << square(100) << endl;

    return 0;
}


