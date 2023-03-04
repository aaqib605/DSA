#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void sort(int arr[], auto n){
    int i = 0;
    
    while(i < n){
        int correctPosition = arr[i] - 1;
        
        if(arr[i] != arr[correctPosition]){
            swap(arr[i], arr[correctPosition]);
        }
        else{
            i++;
        }
    }
    
}

int main() {
    // Function sorts the given array elements (Range: 1 --> N)  (cycleSort)
    int arr[] = {2, 1, 5, 4, 3};
    auto n = sizeof(arr) / sizeof(int);
    
    sort(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
