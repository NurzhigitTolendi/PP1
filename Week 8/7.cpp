#include <iostream>
using namespace std;

float square(float n){
    return n * n;
}

void hello(){
    cout << "Hello!" << endl;
}

void helloStudent(string name){
    cout << "Hello " + name;
}

void incrementArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i]++;
    }
}

int main() {
    // Types of function: returning data and void 

    /* int a = 5;
    cout << square(a) << endl;

    hello();
    string studentName = "Kairat";
    helloStudent(studentName);
*/ 
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    incrementArray(numbers, size);

    for (int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
