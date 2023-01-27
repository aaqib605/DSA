#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void findMinMax(int arr[], auto n){
    int minElem = arr[0], maxElem = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < minElem){
            minElem = arr[i];
        }
        else if(arr[i] > maxElem){
            maxElem = arr[i];
        }
    }
    
    cout << "Min: " << minElem << endl;
    cout << "Max: " << maxElem << endl;
}


int main() {
    // Function prints the min and max in single scan
    int arr[] = {2, 4, -1, 0, 9, 6};
    auto n = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, n);
    return 0;
}
