#include <iostream>
using namespace std;

// Time Complexity --> O(n^2)
// Auxilary Space --> O(n)

int partition(int arr[], auto start, auto end){
    int pivot = arr[start];
    int countSmallerElements = 0;
    
    for(int i = start + 1; i <= end; i++){
        if(arr[i] <= pivot){
            countSmallerElements++;
        }
    }
    
    int pivotIndex = start + countSmallerElements;
    swap(arr[start], arr[pivotIndex]);
    
    int i = start;
    int j = end;
    
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= arr[pivotIndex]) i++;
        while(arr[j] > arr[pivotIndex]) j--;
        
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], auto start, auto end){
    if(start >= end) return;
    
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}



int main() {
    // Function implements Quick Sort
    int arr[] = {5, 9, 8, 3, 5, 7, 2, 1};
    auto n = sizeof(arr) / sizeof(int);

    quickSort(arr, 0, n - 1);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
