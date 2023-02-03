#include <iostream>
using namespace std;

// Time Complexity --> O(n^2) (could be better)
// Auxilary Space --> O(1)

bool isPresent(int arr[], auto n, int sum) {
    
    for(int i = 0; i < n; i++){
        int currSum = arr[i];
        for(int j = i + 1; j < n; j++){
            currSum += arr[j];
            if(currSum == sum) return true;
            if(currSum > sum) break;
        }
    }
    
    return false;
}

int main() {
    // Function check if their exists a subarray of given sum (array contains non-negative numbers)
    int arr[] = {1, 4, 20, 3, 10, 5};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << isPresent(arr, n, 33) << endl;
    
    return 0;
}
