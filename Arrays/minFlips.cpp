#include <iostream> 
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void minFlips(int arr[], auto n) {
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i - 1]){
            if(arr[i] != arr[0]){
                cout << "From " << i << " to ";
            }
            else{
                cout << (i - 1) << endl;
            }
        }
    }
    if(arr[n - 1] != arr[0]){
        cout << (n - 1) << endl;
    }
}

int main() {
    // Function returns the minimum flips to make all the array elements same
    int arr[] = {0, 0, 1, 1, 0, 0, 1, 1, 0, 1};
    auto n = sizeof(arr) / sizeof(arr[0]);
    minFlips(arr, n);
    
    return 0;
}
