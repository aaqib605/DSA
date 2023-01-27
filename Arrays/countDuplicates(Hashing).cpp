#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(n)

void countDuplicates(int arr[], auto n){
    int newSize = arr[n - 1] + 1;
    int *newArr = new int[newSize];
    
    for(int i = 0; i < n; i++){
        newArr[arr[i]]++;
    }
    
    for(int i = 0; i < newSize; i++){
        if(newArr[i] >= 2){
            cout << i << " appears " << newArr[i] << " times" << endl;
        }
    }
    delete []newArr;
}


int main() {
    // Function prints the count of duplicate elements using Hashing
    int arr[] = {2, 3, 3, 4, 5, 5, 5};
    auto n = sizeof(arr) / sizeof(arr[0]);
    countDuplicates(arr, n);
    return 0;
}
