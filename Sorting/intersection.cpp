#include <iostream>
using namespace std;

// Time Complexity --> O(n1 + n2)
// Auxilary Space --> O(1)
 
void intersection(int arr1[], int arr2[], auto n1, auto n2){
    int i = 0;
    int j = 0;
    
    while(i < n1 && j < n2){
        if(i > 0 && arr1[i] == arr1[i - 1]){
            i++;
            continue;
        }
        
        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++;
            j++;
            
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
    }
}

int main() {
    // Function prints the intersection of two sorted arrays
    int arr1[] = {3, 5, 10, 10, 10, 15, 15, 20};
    auto n1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {5, 10, 10, 15, 30};
    auto n2 = sizeof(arr2) / sizeof(int);
    
    intersection(arr1, arr2, n1, n2);
    return 0;
}
