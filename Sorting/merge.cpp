#include <iostream>
using namespace std;

// Time Complexity --> O(n1 + n2)
// Auxilary Space --> O(1)
 
void merge(int arr1[], int arr2[], auto n1, auto n2){
    int i = 0;
    int j = 0;
    
    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }
        else if(arr2[j] < arr1[i]){
            cout << arr2[j] << " ";
            j++;
        }
    }
    
    while(i < n1){
        cout << arr1[i] << " ";
        i++;
    }
    while(j < n2){
        cout << arr2[j] << " ";
        j++;
    }
    cout << endl;
}

int main() {
    // Function prints all the elements of two sorted arrays in sorted order
    int arr1[] = {10, 15, 20};
    auto n1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {5, 6, 6, 15};
    auto n2 = sizeof(arr2) / sizeof(int);
    merge(arr1, arr2, n1, n2);
    
    return 0;
}
