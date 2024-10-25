#include <iostream>

using namespace std;

int sum(int n, int m){ // n, m - parameters; n = 2; m = 3;
    int result = n + m; // local variable of the function "sum";
    return result;
}

float square(float n){
    return n * n;
}

int main(){
    

    int a = 2, b = 3; // local variable of the function "main";

    int r = sum(a, b); // function calling; a, b = arguments; sum(2, 3);
    
    cout << square(3) << endl;

    return 0;
}



