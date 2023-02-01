#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int maxNormal(int arr[], auto n){
    int maxEnding = arr[0];
    int res = arr[0];
    
    for(int i = 1; i < n; i++){
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    
    return res;
}

int arrSum(int arr[], auto n){
    int sum = arr[0];
    for(int i = 1; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int minNormal(int arr[], auto n){
    int res = arr[0];
    int minEnding = arr[0];
    
    for(int i = 1; i < n; i++){
        minEnding = min(minEnding + arr[i], arr[i]);
        res = min(res, minEnding);
    }
    
    return res;
}

int maxCircular(int arr[], auto n){
    int maxSubArraySum = maxNormal(arr, n);
    int arraySum = arrSum(arr, n);
    int minSubArraySum = minNormal(arr, n);
    
    if(maxSubArraySum < 0) return minSubArraySum;
    
    int temp = arraySum - minSubArraySum;
    return max(maxSubArraySum, temp);
    
}

int main() {
    // Function returns the maximum sum of the subarray (circular subarrays inclusive)
    int arr[] = {8, -4, 3, -5, 4};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << maxCircular(arr, n) << endl;
    
    return 0;
}
