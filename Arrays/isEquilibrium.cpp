#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int isEquilibrium(int arr[], auto n){
    int totalSum = arr[0];
    for(int i = 1; i < n; i++){
        totalSum += arr[i];
    }
    
    int leftSum = 0;
    for(int i = 0; i < n; i++){
        if(leftSum == totalSum - arr[i]) return true;
        leftSum += arr[i];
        totalSum -= arr[i];
    }
    return false;
}

int main() {
    // Function returns if their exists an equilibrium point
    int arr[] = {3, 4, 8, -9, 20, 6};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << isEquilibrium(arr, n) << endl;
    
    return 0;
}
