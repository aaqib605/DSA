#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void prefixSum(int arr[], auto n){
    int currSum = arr[0];
    for(int i = 1; i < n; i++){
        currSum += arr[i];
        arr[i] = currSum;
    }
}

int getSum(int arr[], auto n, int start, int end) {
    prefixSum(arr, n);
    return arr[end] - arr[start - 1];
}

int main() {
    // Function returns the sum of the given query
    int arr[] = {2, 8, 3, 9, 6, 5, 4};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << getSum(arr, n, 2, 6) << endl;
    
    return 0;
}
