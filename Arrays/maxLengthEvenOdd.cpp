#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int maxLengthEvenOdd(int arr[], auto n){
    int length = 1;
    int curr = 1;
    
    for(int i = 1; i < n; i++){
        if(arr[i - 1] % 2 != arr[i] % 2){
            curr++;
            length = max(length, curr);
        }
        else{
            curr = 1;
        }
    }
    return length;
}

int main() {
    // Function returns the length of the maximum even - odd subarray
    int arr[] = {5, 10, 20, 6, 3, 8};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << maxLengthEvenOdd(arr, n) << endl;
    
    return 0;
}
