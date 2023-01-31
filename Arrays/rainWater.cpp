#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(n)

int rainWater(int arr[], auto n){
    int res = 0;
    int lMax[n];
    int rMax[n];
    
    lMax[0] = arr[0];
    for(int i = 1; i < n; i++){
        lMax[i] = max(arr[i], lMax[i - 1]);
    }
    
    rMax[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--){
        rMax[i] = max(arr[i], rMax[i + 1]);
    }
    
    for(int i = 1; i < n - 1; i++){
        res = res + (min(lMax[i], rMax[i]) - arr[i]);
    }
    
    return res;
}


int main() {
    // Function returns the maximum rain water trapped
    int arr[] = {4, 2, 0, 3, 2, 5};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << rainWater(arr, n) << endl;
    
    return 0;
}
