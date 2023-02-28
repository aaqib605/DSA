#include <iostream>
using namespace std;

// Time Complexity --> O(n^2)
// Auxilary Space --> O(1)
 
void bubbleSort(int arr[], auto n){
    for(int i = 0; i < n - 1; i++){
        bool swapped = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

int main() {
    // Function implements the Bubble Sort
    int arr[] = {2, 10, 8, 7};
    auto n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
