#include <iostream>
using namespace std;

// Time Complexity --> O(n^2)
// Auxilary Space --> O(1)

bool pairSum(int arr[], int start, int end, int sum){
    while(start < end){
        if(arr[start] + arr[end] == sum) return 1;
        
        if(arr[start] + arr[end] > sum) end--;
        if(arr[start] + arr[end] < sum) start++;
    }
    return 0;
}

bool tripletSum(int arr[], auto n, int sum){
    for(int i = 0; i < n; i++){
        if(pairSum(arr, i + 1, n - 1, sum - arr[i])) return true;
    }
    return false;
}


int main() {
    // Function checks if there exists a triplet equal to the given sum in a sorted array
    int arr[] = {2, 3, 4, 8, 9, 20, 40};
    auto n = sizeof(arr) / sizeof(arr[0]);
    int sum = 32;
    cout << tripletSum(arr, n, sum) << endl;
    return 0;
}
