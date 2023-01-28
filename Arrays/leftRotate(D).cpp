#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void reverse(int arr[], int start, int end){
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void leftRotate(int arr[], auto n, int d){
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}


int main() {
    // Function left rotates the array by d places
    int arr[] = {8, 5, 10, 20, 22};
    auto n = sizeof(arr) / sizeof(int);
    leftRotate(arr, n, 3);
    
    for(auto elem: arr){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
