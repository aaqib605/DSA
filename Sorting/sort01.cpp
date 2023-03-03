#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)


void sort01(int arr[], auto n){
    int i = 0, j = n - 1;
    
    while(i < j){
        while(arr[i] != 1) i++;
        while(arr[j] != 0) j--;
        
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
}



int main() {
    // Function sorts the binary array
    int arr[] = {0, 1, 1, 1, 0, 0, 1};
    auto n = sizeof(arr) / sizeof(int);
    sort01(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
