#include <iostream>
#include "string"
using namespace std;

// Time complexity --> O(n)
// Auxilary Space --> O(1)

bool isPresent(int arr[][4], int row, int col, int target){
    int i = 0;
    int j = col - 1;
    
    while((i >= 0 && i < row) && (j >= 0 && j < col)){
        if(arr[i][j] == target) return true;
        else if(target > arr[i][j]){
            i++;
        }
        else if(target < arr[i][j]){
            j--;
        }
    }
    return false;
}

int main() {
    // Function checks if the element is present in an 2D array
    int arr[4][4] = {{5, 7, 8, 20}, {9, 11, 18, 30}, {10, 20, 29, 40}, {15, 23, 30, 50}};
    int target = 18;
    cout << isPresent(arr, 4, 4, target) << endl;
    return 0;
}
