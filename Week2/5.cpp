#include <iostream>

using namespace std;

int main() {
    // >  <  ==  !=  >=   <=  

    int a = 5;
    int b = 5;
    int result = (a == b) ; // 1 

    int c = 10; 
    int d = 15;
    int result1 = (c != d); // 1 
    int result2 = (c == d) ; // 0 
    int result3 = (a >= b); // 1 
    int result4 = (a > b); // 0 
    int result5 = (c > d); // 0
    int result6 = (c <= d); // 1 
    int result7 = (a != b); // 0


    cout << result  << endl; 
    cout << result1 << endl; 
    cout << result2 << endl; 
    cout << result3 << endl; 
    cout << result4 << endl; 
    cout << result5 << endl; 
    cout << result6 << endl; 
    cout << result7 << endl; 

    return 0;
}