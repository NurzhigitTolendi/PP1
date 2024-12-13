#include <iostream>
using namespace std;

bool findElement(int arr[], int size, int target) {
    if (size == 0) return false; 
    if (arr[size - 1] == target) return true; 
    return findElement(arr, size - 1, target); 
}

int main() {
    // {1, 3, 5, 7, 9};
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cin >> target;

    if (findElement(arr, size, target)) {
        cout << target << " is found in the array." << endl;
    } else {
        cout << target << " is not in the array." << endl;
    }
    return 0;
}
