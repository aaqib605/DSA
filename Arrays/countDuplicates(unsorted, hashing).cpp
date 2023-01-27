#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void countDuplicates(int arr[], auto n){
    int maxElem = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > maxElem){
            maxElem = arr[i];
        }
    }
    
    int *newArr = new int[maxElem + 1];
    for(int i = 0; i < n; i++){
        newArr[arr[i]]++;
    }
    
    for(int i = 0; i < maxElem + 1; i++){
        if(newArr[i] >= 2){
            cout << i << " appears " << newArr[i] << " times" << endl;
        }
    }
    
    delete [] newArr;
}


int main() {
    // Function prints the count of duplicates in an unsorted array using hashing
    int arr[] = {2, 6, 4, 3, 6, 3, 6, 2, 6};
    auto n = sizeof(arr) / sizeof(arr[0]);
    countDuplicates(arr, n);
    return 0;
}
