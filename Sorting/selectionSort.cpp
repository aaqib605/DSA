#include <iostream>
using namespace std;

// Time Complexity --> O(n^2)
// Auxilary Space --> O(1)
 
void selectionSort(int arr[], auto n){
    for(int i = 0; i < n - 1; i++){
        int minElementIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minElementIndex]){
                minElementIndex = j;
            }
        }
        swap(arr[i], arr[minElementIndex]);
    }
}

int main() {
    // Function implements the Selection Sort
    int arr[] = {10, 5, 8, 20, 2, 18};
    auto n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
