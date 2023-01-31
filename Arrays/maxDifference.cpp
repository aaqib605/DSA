#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int maxDifference(int arr[], auto n){
    int maxDiff = INT_MIN;
    int minEl = arr[0];
    
    for(int i = 1; i < n; i++){
        maxDiff = max(maxDiff, arr[i] - minEl);
        minEl = min(minEl, arr[i]);
    }
    return maxDiff;
}


int main() {
    // Function returns the max difference between elements
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << maxDifference(arr, n) << endl;
    
    return 0;
}
