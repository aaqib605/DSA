#include <iostream>
using namespace std;

// Time Complexity --> O(nLogn)
// Auxilary Space --> O(n)

void countAndMerge(int arr[], auto start, auto mid, auto end, auto &count){
    int i = start;
    int j = mid + 1;
    int size = (end - start) + 1;
    int k = 0;
    int *newArr = new int[size];
    
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            newArr[k++] = arr[i++];
        }
        else if(arr[j] < arr[i]){
            count += (mid - i) + 1;
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
 
void mergeSort(int arr[], auto start, auto end, int &count){
    if(start >= end) return;
    
    int mid = start + (end - start) / 2;
    
    mergeSort(arr, start, mid, count);
    mergeSort(arr, mid + 1, end, count);
    countAndMerge(arr, start, mid, end, count);
}

int countInversions(int arr[], auto n){
    int count = 0;
    
    mergeSort(arr, 0, n - 1, count);
    return count;
}

int main() {
    // Function returns the count of inversions in an array
    int arr[] = {2, 4, 1, 3, 5};
    auto n = sizeof(arr) / sizeof(int);
    
    cout << countInversions(arr, n) << endl;
    return 0;
}
