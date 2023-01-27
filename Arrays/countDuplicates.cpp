#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void countDuplicates(int arr[], auto n){
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]){
            int j = i + 1;
            while(arr[i] == arr[j]) j++;
            cout << arr[i] << " appears " << j - i << " times" << endl;
            i = j;
        }
    }
}


int main() {
    // Function prints the count of duplicate elements
    int arr[] = {2, 3, 3, 4, 5, 5, 5};
    auto n = sizeof(arr) / sizeof(arr[0]);
    countDuplicates(arr, n);
    return 0;
}
