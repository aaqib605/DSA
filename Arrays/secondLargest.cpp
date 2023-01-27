#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int secondLargestElem(int arr[], auto n){
    int res = -1;
    int largest = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i] < arr[largest]){
            if(res == -1 || arr[i] > arr[res]){
                res = i;
            }
        }
    }
    return res;
}


int main() {
    // Function returns the index of second largest element
    int arr[] = {10, 20, 40, 30};
    auto n = sizeof(arr) / sizeof(int);
    cout << secondLargestElem(arr, n) << endl;
    return 0;
}
