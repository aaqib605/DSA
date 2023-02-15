#include <iostream> 
using namespace std;

// Time complexity --> O(logN)
// Auxilary Space --> O(1)

int binarySearch(int arr[], auto n, int key){
    int start = 0;
    auto end = n - 1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == key) return mid;
        
        if(key > arr[mid]){
            start = mid + 1;
        }
        else if (key < arr[mid]){
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    // Function returns the index of the element present in a sorted array
    int arr[] = {10, 20, 30, 40, 50, 60};
    auto n = sizeof(arr) / sizeof(int);
    int key = 20;
    cout << binarySearch(arr, n, key) << endl;
    return 0;
}
