#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void printDuplicates(int arr[], auto n){
    int lastDuplicate = NULL;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]){
            if(lastDuplicate != arr[i]){
                cout << arr[i] << " ";
                lastDuplicate = arr[i];
            }
        }
    }
    cout << endl;
}


int main() {
    // Function prints the duplicates
    int arr[] = {2, 3, 3, 4, 5, 5, 5};
    auto n = sizeof(arr) / sizeof(arr[0]);
    printDuplicates(arr, n);
    return 0;
}
