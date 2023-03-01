#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void partition(int arr[], auto n, int p){
    
    int countSmallerElements = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < arr[p]){
            countSmallerElements++;
        }
    }
    int pivotIndex = countSmallerElements;
    swap(arr[p], arr[pivotIndex]);
    
    int i = 0;
    int j = n - 1;
    
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < arr[pivotIndex]) i++;
        while(arr[j] > arr[pivotIndex]) j--;
        
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main() {
    // Function implements the partition function used in Quick sort(Hoare's partition)
    int arr[] = {3, 8, 6, 12, 10, 7};
    auto n = sizeof(arr) / sizeof(int);

    partition(arr, n, 1); // partition around the index 1 in the array
    return 0;
}
