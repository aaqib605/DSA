#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)


void separateNegativeAndPositive(int arr[], auto n){
    int i = 0, j = n - 1;
    
    while(i < j){
        while(arr[i] < 0) i++;
        while(arr[j] > 0) j--;
        
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
}



int main() {
    // Function segregates the positive and negative values in an array (order of elements does not matter)
    int arr[] = {1, 2, -3, 4, -4, -5};
    auto n = sizeof(arr) / sizeof(int);
    int m = 5;
    separateNegativeAndPositive(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
