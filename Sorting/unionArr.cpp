#include <iostream>
using namespace std;

// Time Complexity --> O(n1 + n2)
// Auxilary Space --> O(1)
 
void unionArr(int arr1[], int arr2[], auto n1, auto n2){
    int i = 0;
    int j = 0;
    
    while(i < n1 && j < n2){
        if(i > 0 && arr1[i] == arr1[i - 1]){
            i++;
            continue;
        }
        else if(j > 0 && arr2[j] == arr2[j - 1]){
            j++;
            continue;
        }
        
        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++;
            j++;
            
        }
        else if(arr1[i] < arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }
        else if(arr2[j] < arr1[i]){
            cout << arr2[j] << " ";
            j++;
        }
    }
    
    while(i < n1){
        if(arr1[i] != arr1[i - 1]){
            cout << arr1[i] << " ";
        }
        i++;
    }
    while(j < n2){
        if(arr2[j] != arr2[j - 1]){
            cout << arr2[j] << " ";
        }
        j++;
    }
    cout << endl;
}

int main() {
    // Function prints the union of two sorted arrays(no repeated elements)
    int arr1[] = {2, 10, 20, 20};
    auto n1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {3, 20, 40};
    auto n2 = sizeof(arr2) / sizeof(int);
    
    unionArr(arr1, arr2, n1, n2);
    return 0;
}
