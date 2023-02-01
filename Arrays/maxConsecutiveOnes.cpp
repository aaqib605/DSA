#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int maxConsecutiveOnes(int arr[], auto n){
    int res = 0;
    int curr = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            curr = 0;
        }
        else{
            curr++;
            res = max(res, curr);
        }
    }
    return res;
}

int main() {
    // Function returns the count of maximum consecutive ones
    int arr[] = {0, 1, 1, 0, 1, 0};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << maxConsecutiveOnes(arr, n) << endl;
    
    return 0;
}
