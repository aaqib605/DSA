#include <iostream>
using namespace std;

// Time Complexity --> O(n^2)
// Auxilary Space --> O(1)

void pairSum(int arr[], auto n, int sum){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == sum){
                cout << arr[i] << " + " << arr[j] << " = " << sum << endl;
                break;
            }
        }
    }
}


int main() {
    // Function prints the pair of elements with a given sum
    int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    auto n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;
    pairSum(arr, n, sum);
    return 0;
}
