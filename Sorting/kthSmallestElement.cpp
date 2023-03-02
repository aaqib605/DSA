#include <iostream>
using namespace std;

// Time Complexity --> O(n^2)
// Auxilary Space --> O(1)

int partition(int arr[], int start, int end){
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
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;
        
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    return pivotIndex;
}

int kthSmallest(int arr[], auto n, int k){
    int start = 0;
    int end = n - 1;
    
    while(start <= end){
        int p = partition(arr, start, end);
        
        if(p == (k - 1)) return arr[p];
        
        if(p > (k - 1)){
            end = p - 1;
        }
        else if(p < (k - 1)){
            start = p + 1;
        }
    }
    
    return -1;
}



int main() {
    // Function returns the kth smallest element in an unsorted array (Quick Select Algo)
    int arr[] = {10, 5, 30, 12};
    auto n = sizeof(arr) / sizeof(int);

    cout << kthSmallest(arr, n, 2) << endl;
    return 0;
}
