#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void findMissing(int arr[], auto n){
    int diff = arr[0] - 0;
    for(int i = 0; i < n; i++){
        if(arr[i] - i != diff){
            while(diff < arr[i] - i){
                cout << i + diff << " ";
                diff++;
            }
        }
    }
    cout << endl;
}


int main() {
    // Function returns multiple missing numbers in a sorted array
    int arr[] = {3, 6, 8, 9, 13};
    auto n = sizeof(arr) / sizeof(arr[0]);
    findMissing(arr, n);
    
    return 0;
}
