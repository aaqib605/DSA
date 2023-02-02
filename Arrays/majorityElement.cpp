#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int majorityElement(int arr[], auto n) {
    int res = 0;
    int count = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[res]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            res = i;
            count = 1;
        }
    }
    
    count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[res]) count++;
    }
    
    if(count < n / 2){
        res = -1;
    }
    return res;
}

int main() {
    // Function returns the index(any) of majority element (Boyer-Moore voting algorithm)
    int arr[] = {8, 8, 6, 6, 6, 4, 6};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << majorityElement(arr, n) << endl;
    
    return 0;
}
