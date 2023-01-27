#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int indexLargestElem(int arr[], auto n){
    int index = 0;
    int maxElem = arr[0];
    
    for(int i = 1; i < n; i++){
        if(arr[i] > maxElem){
            maxElem = arr[i];
            index = i;
        }
    }
    return index;
}


int main() {
    // Function returns the index of largest element
    int arr[] = {2, 9, 1, 61, 5, 11};
    auto n = sizeof(arr) / sizeof(int);
    cout << indexLargestElem(arr, n) << endl;
    return 0;
}
