#include <iostream>
using namespace std;

struct Triangle {
    int sideA;
    int sideB;
    int sideC;

    int perimeter(){
        int p; 
        p = sideA + sideB + sideC;
        return p;
    }
};

int main(){
    /*
    struct 
    */
    Triangle t; 
    cin >> t.sideA ;
    cin >> t.sideB;
    cin >> t.sideC;

    cout << t.perimeter() << endl;
    

    return 0;
}