#include <iostream>
using namespace std;

// Time complexity --> O(logN)
// Auxilary Space --> O(1)

int leftOccurence(int arr[], int start, auto end){
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == 1){
            ans = mid;
            end = mid - 1;
        }
        
        if(1 > arr[mid]){
            start = mid + 1;
        }
        else if(1 < arr[mid]){
            end = mid - 1;
        }
    }
    return ans;
}

int countOnes(int arr[], auto n){
    int left = leftOccurence(arr, 0, n - 1);
    if(left == -1) return 0;
    
    return (n - left);
}

int main(){
    // Function returns the occurences of 1's in a binary sorted array
    int arr[] = {0, 0, 0, 1, 1, 1, 1};
    auto n = sizeof(arr) / sizeof(int);
    cout << countOnes(arr, n) << endl;
    return 0;
}
