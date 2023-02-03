#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int maxConsecutiveSum(int arr[], auto n, int k) {
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < k; i++){
        currSum += arr[i];
    }
    
    maxSum = currSum;
    
    for(int i = k; i < n; i++){
        currSum += (arr[i] - arr[i - k]);
        maxSum = max(maxSum, currSum);
    }
    
    return maxSum;
}

int main() {
    // Function returns the maximum sum of k consecutive elements (window sliding)
    int arr[] = {1, 8, 30, -5, 20, 7};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << maxConsecutiveSum(arr, n, 3) << endl;
    
    return 0;
}
