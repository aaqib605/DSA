#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

bool isSorted(int arr[], auto n){
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1]) return false;
    }
    return true;
}


int main() {
    // Function checks if the array is sorted
    int arr[] = {2, 8, 5, 6};
    auto n = sizeof(arr) / sizeof(int);
    cout << isSorted(arr, n) << endl;
    return 0;
}
