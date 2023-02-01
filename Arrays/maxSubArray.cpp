#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int maxSubArraySum(int arr[], auto n){
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i = 1; i < n; i++){
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main() {
    // Function returns the sum of maximum subarray
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSubArraySum(arr, n) << endl;
    
    return 0;
}
