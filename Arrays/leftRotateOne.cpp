#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void leftRotate(int arr[], auto n){
    int elem = arr[0];
    for(int i = 0; i < n; i++){
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = elem;
}


int main() {
    // Function left rotates the array by one place
    int arr[] = {8, 5, 0, 20, 22};
    auto n = sizeof(arr) / sizeof(int);
    leftRotate(arr, n);
    
    for(auto elem: arr){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
