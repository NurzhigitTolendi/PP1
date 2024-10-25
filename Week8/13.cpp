#include <iostream>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){ // [2...n-1]
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    // - [ ] Is it Prime?
    int a;
    cin >> a;

    if(isPrime(a)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }



    return 0;
}