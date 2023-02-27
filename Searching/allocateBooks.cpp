#include <iostream>
using namespace std;

// Time Complexity --> O(n*log(maxpages - minPages))
// Auxilary Space --> O(1)
 
bool canAllocate(int arr[], auto n, int k, int mid){
    int pages = 0;
    int studentCount = 1;

    for(int i = 0; i < n; i++){
        if(pages + arr[i] <= mid){
            pages += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > k || arr[i] > mid){
                return false;
            }
            pages = arr[i];
        }
    }
    return true;
}

int allocateMin(int arr[], auto n, int k){
    
    // If the number of books are less than number of students
    if(n < k) return -1;
    
    int minPages = arr[0];
    int maxPages = arr[0];
    for(int i = 1; i < n; i++){
        minPages = min(minPages, arr[i]);
        maxPages += arr[i];
    }
    
    int low = minPages;
    int high = maxPages;
    int ans = -1;
    
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(canAllocate(arr, n, k, mid)){
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
 

int main() {
    // Function returns the min pages that can be allocated to the students(k) (Book Allocation)
    int arr[] = {10, 5, 30, 1, 2, 5, 10, 10};
    auto n = sizeof(arr) / sizeof(int);
    int k = 3;
    cout << allocateMin(arr, n, k) << endl;
    return 0;
}
