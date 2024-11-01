#include <iostream>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    // Function isPrime 
    // 13
    // 15 

    int a; 
    cin >> a;

    // cout << isPrime(a) << endl;

    if (isPrime(a)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}