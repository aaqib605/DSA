#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(n)

void pairSum(int arr[], auto n, int sum){
    int maxElem = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > maxElem){
            maxElem = arr[i];
        }
    }
    
    int *newArr = new int[maxElem + 1];
    for(int i = 0; i < n; i++){
        int reqElem = sum - arr[i];
        if(newArr[reqElem]){
            cout << arr[i] << " + " << reqElem << " = " << sum << endl;
        }
        newArr[arr[i]]++;
    }
    delete [] newArr;
}


int main() {
    // Function prints the pair of elements with a given sum using hashing
    int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14, 4};
    auto n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;
    pairSum(arr, n, sum);
    return 0;
}
