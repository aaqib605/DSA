#include <iostream>
using namespace std;

// Time Complexity --> O(n + k)
// Auxilary Space --> O(n + k)

void countingSort(int arr[], auto n, int k){
    int count[k];
    // Initializing the count array to 0
    for(int i = 0; i < k; i++){
        count[i] = 0;
    }
    
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }
    
    for(int i = 1; i < k; i++){
        count[i] = count[i - 1] + count[i];
    }
    
    int output[n];
    for(int i = n - 1; i >= 0; i--){ // iterating backwards for stability
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    
    for(int i = 0; i < n; i++){
        arr[i] = output[i];
    }
}

int main() {
    // Function implements the couting sort (Array element range 1 --> k)
    int arr[] = {5, 6, 5, 2};
    auto n = sizeof(arr) / sizeof(int);
    int range = 7;
    countingSort(arr, n, range);
    
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
