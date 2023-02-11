#include <iostream>
#include <math.h>
using namespace std;

// Time complexity --> O(2^n)
// Auxilary Space --> O(1)

void subsets(int arr[], auto n){
    for(int i = 0; i <= (1 << n) - 1; i++){
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    // Function prints all the subsets of a given set (Bit Magic)
    int arr[] = {1, 2, 3};
    auto n = sizeof(arr) / sizeof(int);
    subsets(arr, n);
    return 0;
}
