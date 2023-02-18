#include <iostream>
using namespace std;

// Time complexity --> O(logN)
// Auxilary Space --> O(1)

int findPivot(int arr[], int start, int end){
    int n = end + 1;
    int mid = start + (end - start) / 2;
    while(start <= end){
        
        int prev = (mid + n - 1) % n;
        int next = (mid + 1) % n;
        
        if(arr[mid] < arr[prev] && arr[mid] < arr[next]){
            return mid;
        }
        else if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else if(arr[mid] <= arr[n - 1]){
            end = mid - 1;
        }
        
        mid = start + (end - start) / 2;
    }
    return mid;
}

int binarySearch(int arr[], int start, int end, int key){
    int mid = start + (end - start) / 2;
    
    while(start <= end){
      
        if(arr[mid] == key){
            return mid;
        }
        else if(key <= arr[mid]){
            end = mid - 1;
        }
        else if(key >= arr[mid]){
            start = mid + 1;
        }
        
        mid = start + (end - start) / 2;
    }
    return -1;
}

 

int search(int A[], auto n, int key){
    int l = 0, h = n - 1;
    
    int pivot = findPivot(A, l, h);
    
    int leftSearch = binarySearch(A, l, pivot - 1, key);
    int rightSearch = binarySearch(A, pivot, h, key);
    
    if(leftSearch == -1) return rightSearch;
    return leftSearch;
}

int main(){
    // Function the element in a rotated sorted array
    int arr[] = {10, 20, 40, 60, 5, 5, 8};
    auto n = sizeof(arr) / sizeof(int);
    cout << search(arr, n, 5) << endl;
    return 0;
}
