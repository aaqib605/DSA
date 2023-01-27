#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void deleteElem(int arr[], auto n, int target){
    int index = NULL;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }
    int i = index;
    for(; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[i] = -1;
}


int main() {
    // Function implements delete operation on an array
    int arr[] = {2, 9, 1, 6, 5, 11};
    auto n = sizeof(arr) / sizeof(int);
    int target = 6;
    deleteElem(arr, n, target);
    
    for(auto elem: arr){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
