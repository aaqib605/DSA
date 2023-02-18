#include <iostream>
using namespace std;

// Time complexity --> O(logN)
// Auxilary Space --> O(1)

int findElement(int arr[], auto n, int target){
    int start = 0;
    int end = n - 1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == target) return mid;
        
        // Left half is sorted
        if(arr[start] < arr[mid]){
            if(target >= arr[start] && target < arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else{ // right half is sorted
            if(target > arr[mid] && target <= arr[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    // Function the element in a rotated sorted array
    int arr[] = {100, 200, 300, 400, 20, 30, 40};
    auto n = sizeof(arr) / sizeof(int);
    cout << findElement(arr, n, 50  ) << endl;
    return 0;
}
