#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(n)

void printFrequencies(int arr[], auto n){
    int minEl = INT_MAX;
    int maxEl = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] < minEl){
            minEl = arr[i];
        }
        else{
            maxEl = arr[i];
        }
    }
    
    int *newArr = new int[maxEl + 1];
    for(int i = 0; i < n; i++){
        newArr[arr[i]]++;
    }
    
    for(int i = minEl; i <= maxEl; i++){
        if(newArr[i] > 0){
            cout << i << " appears " << newArr[i] << " times" << endl;
        }
    }
}


int main() {
    // Function prints the frequencies of all the elements in an array
    int arr[] = {10, 10, 10, 25, 30, 30};
    auto n = sizeof(arr) / sizeof(arr[0]);
    printFrequencies(arr, n);
    
    return 0;
}
