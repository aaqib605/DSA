#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

bool maxConsecutiveSum(int arr[], auto n, int sum, int k) {
    int currSum = 0;
    for(int i = 0; i < k; i++){
        currSum += arr[i];
    }
    
    if(currSum == sum) return true;
    
    for(int i = k; i < n; i++){
        currSum += (arr[i] - arr[i - k]);
        if(currSum == sum) return true;
    }
    return false;
}

int main() {
    // Function checks if there exists a subarray of size k with given sum
    int arr[] = {1, 8, 30, -5, 20, 7};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << maxConsecutiveSum(arr, n, 38, 3) << endl;
    
    return 0;
}
