#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void revArr(int arr[], auto n){
    int start = 0, end = n - 1;
    while(start < end){
        swap(arr[start++], arr[end--]);
    }
}


int main() {
    // Function reverses the array
    int arr[] = {2, 8, 5, 6, 11};
    auto n = sizeof(arr) / sizeof(int);
    revArr(arr, n);
    
    for(auto elem: arr){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
