#include <iostream>

using namespace std;

float square(float n){
    return n * n;
}

void hello(){
    cout << "hi" << endl;
}

void greeing(string name){
    cout << "Hello " << name << "!\n";
}

void incrementArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i]++;
    }
}

int main(){
    // float f = 4;
    // cout << square(f) << endl;
    // hello();
    string s;
    cout << "Enter your name...\n";
    cin >> s;

    greeing(s);


    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    incrementArray(numbers, size);

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}