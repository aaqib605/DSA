#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int removeDuplicates(int arr[], auto n){
    int res = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[res - 1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}


int main() {
    // Function removes the duplicates from the sorted array
    int arr[] = {10, 20, 20, 30, 30, 30};
    auto n = sizeof(arr) / sizeof(int);
    cout << removeDuplicates(arr, n) << endl;
    return 0;
}
