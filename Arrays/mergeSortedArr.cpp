#include <iostream>
using namespace std;

// Time Complexity --> O(n1 + n2)
// Auxilary Space --> O(1)

void mergeSortedArr(int arr1[], auto n1, int arr2[], auto n2, int arr3[]){
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    
    while(i < n1) arr3[k++] = arr1[i++];
    while(j < n2) arr3[k++] = arr2[j++];
}


int main() {
    // Function merges two sorted arrays
    int arr1[] = {1, 3, 6, 9, 10};
    auto n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {-1, 6, 7, 18, 12, 19};
    auto n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[11];
    mergeSortedArr(arr1, n1, arr2, n2, arr3);
    
    for(auto elem: arr3){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
