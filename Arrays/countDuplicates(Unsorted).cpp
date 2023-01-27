#include <iostream>
using namespace std;

// Time Complexity --> O(n^2)
// Auxilary Space --> O(1)

void countDuplicates(int arr[], auto n){
    for(int i = 0; i < n - 1; i++){
        int count = 1;
        if(arr[i] != -1){
            for(int j = i + 1; j < n; j++){
                if(arr[i] == arr[j]){
                    count++;
                    arr[j] = -1;
                }
            }
            if(count >= 2){
                cout << arr[i] << " appears " << count << " times" << endl;
            }
        }
    }
}


int main() {
    // Function prints the count of duplicates in an unsorted array
    int arr[] = {2, 6, 4, 3, 6, 3, 6, 2, 6};
    auto n = sizeof(arr) / sizeof(arr[0]);
    countDuplicates(arr, n);
    return 0;
}
