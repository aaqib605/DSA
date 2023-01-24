#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(n)
void revArr(int arr[], int start, int end){
    if(start <= end){
        swap(arr[start], arr[end]);
        revArr(arr, start + 1, end - 1);
    }
}


int main() {
    // Function reverses the array
    int arr[5] = {1, 2, 3, 4, 5};
    revArr(arr, 0, 4);
    return 0;
}
