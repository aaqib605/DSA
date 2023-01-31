#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void findMissing(int arr[], auto n){
    int diff = arr[0] - 0;
    for(int i = 0; i < n; i++){
        if(arr[i] - i != diff){
            cout << "Missing number: " << i + diff << endl;
            break;
        }
    }
}


int main() {
    // Function returns first missing number in a sorted array
    int arr[] = {3, 4, 5, 6, 8, 9, 10};
    auto n = sizeof(arr) / sizeof(arr[0]);
    findMissing(arr, n);
    
    return 0;
}
