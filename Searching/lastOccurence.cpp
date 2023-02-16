#include <iostream>
using namespace std;

// Time complexity --> O(logN)
// Auxilary Space --> O(1)

int lastOccurence(int arr[], int start, auto end, int key){
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        
        if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid  - 1;
        }
    }
    return ans;
}

int main(){
    // Function returns the last occurence of the element in a sorted array
    int arr[] = {1, 10, 10, 10, 20, 20, 20, 30};
    auto n = sizeof(arr) / sizeof(int);
    int key = 20;
    cout << lastOccurence(arr, 0, n - 1, key) << endl;
    return 0;
}
