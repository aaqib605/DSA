#include <iostream>
using namespace std;

// Time complexity --> O(N)
// Auxilary Space --> O(1)

int occursTwice(int arr[], auto n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans ^= arr[i];
    }
    
    for(int i = 1; i < n; i++){
        ans ^= i;
    }
    
    return ans;
}

int main(){
    // Function returns the element that occurs twice in the array
    int arr[] = {1, 2, 3, 4, 4};
    auto n = sizeof(arr) / sizeof(int);
    cout << occursTwice(arr, n) << endl;
    return 0;
}
