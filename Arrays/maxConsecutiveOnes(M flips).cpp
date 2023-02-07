#include <iostream>
using namespace std;

// Time complexity --> O(n)
// Auxilary Space --> O(1)

int maxConsecutiveOnes(int arr[], auto size, int m){
    int res = 0;
    int zeroCount = 0;
    int start = 0;
    
    for(int end = 0; end < size; end++){
        if(arr[end] == 0) zeroCount++;
        
        while(zeroCount > m){
            if(arr[start] == 0){
                zeroCount--;
            }
            start++;
        }
        
        res = max(res, end - start + 1);
    }
    return res;
}

int main() {
    // Function returns the maximum no of consecutive 1's produced by flipping at most M 0's (Sliding Window)
    int arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    auto size = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    cout << maxConsecutiveOnes(arr, size, m) << endl;
    return 0;
}
