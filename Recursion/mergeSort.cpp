#include <iostream>
using namespace std;

void merge(int arr[], int, int);

// Time complexity --> O(nlogn)
// Auxilary space --> O(logn)
void mergeSort(int arr[], auto start, auto end){
    if(start >= end) return;
    auto mid = start + (end - start) / 2;
    
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    
    merge(arr, start, end);
}

void merge(int arr[], int start, int end){
    auto mid = start + (end - start) / 2;
    int i = start;
    int j = mid + 1;
    
    int size = (end - start) + 1;
    int *newArr = new int[size];
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
    delete[] newArr;
}

int main()
{
    // Function implements merge sort
    int arr[] = {10, 21, 19, 7, 2};
    auto n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    
    for(auto elem: arr){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
