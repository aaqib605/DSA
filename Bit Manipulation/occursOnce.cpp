#include <iostream>
using namespace std;

// Time complexity --> O(32 * N)
// Auxilary Space --> O(1)

int occursOnce(int arr[], auto n){
    int ans = 0;
    int shift = 1;
    
    for(int i = 0; i < 32; i++){
        int count = 0;
        for(int i = 0; i < n; i++){
            
            if((arr[i] & shift)){
                count++;
            }
        }
        if((count % 3) != 0){
            ans += shift;
        }
        shift <<= 1;
    }
    
    return ans;
}

int main(){
    // Function returns the single element present in an array where every other element occurs thrice
    int arr[] = {2, 3, 2, 5, 2, 5, 5};
    auto n = sizeof(arr) / sizeof(int);
    cout << occursOnce(arr, n) << endl;
    return 0;
}
