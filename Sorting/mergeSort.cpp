#include <iostream>
using namespace std;

// Time Complexity --> O(nLogn)
// Auxilary Space --> O(n)

void merge(int arr[], auto start, auto end){
    auto mid = start + (end - start) / 2;
    int i = start;
    int j = mid + 1;
    
    int newSize = (end - start) + 1;
    int *newArr = new int[newSize];
    int k = 0;
    
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            newArr[k++] = arr[i++];
        }
        else{
            newArr[k++] = arr[j++];
        }
    }
    
    while(i <= mid){
        newArr[k++] = arr[i++];
    }
    while(j <= end){
        newArr[k++] = arr[j++];
    }
    
    k = 0;
    for(int i = start; i <= end; i++){
        arr[i] = newArr[k++];
    }
    
    delete []newArr;
}
 
void mergeSort(int arr[], auto start, auto end){
    if(start >= end) return;
    
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end);
}

int main() {
    // Function implements merge sort
    int arr[] = {2, 9, 6, 1, 18, 4};
    auto n = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, n - 1);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
