#include <iostream>
using namespace std;

// Time Complexity --> O(n^2)
// Auxilary Space --> O(1)

int maxConsecutiveOnes(int arr[], auto n, int m){
    
    int result = 0;
    
    for(int i = 0; i < n; i++){
        int length = 0;
        int count = 0;
        for(int j = i; j < n; j++){
            length++;
            if(arr[j] == 0) count++;
        }
        if(count <= m){
            result = max(result, length);
        }
    }
    return result;
}

int main() {
    // Function returns the maximum consecutive 1's in a binary array after flipping at most m zeroes
    int arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    auto n = sizeof(arr) / sizeof(int);
    cout << maxConsecutiveOnes(arr, n, 1) << endl;
    return 0;
}
