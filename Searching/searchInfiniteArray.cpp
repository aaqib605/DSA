#include <iostream>
using namespace std;

// Time complexity --> O(log(Pos))
// Auxilary Space --> O(1)


int findElement(int arr[], auto n, int target){
    
    int start = 0, end = 1;
    int val = arr[0];
  
    while (val < target){
        start = end;
        end *= 2;
        val = arr[end];
    }
     
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == target) return mid;
        
        if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
    }
    
    return -1;
}

int main(){
    // Function the index of the element in an infinite sized array
    int arr[] = {1, 10, 15, 20, 40, 80, 90, 100, 120, 500};
    auto n = sizeof(arr) / sizeof(int);
    cout << findElement(arr, n, 100) << endl;
    return 0;
}
