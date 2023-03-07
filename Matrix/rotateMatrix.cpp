#include <iostream>
using namespace std;

// Time Complexity --> O(n + m)
// Auxilary Space --> O(1)

void rotateMatrix(int arr[3][3]){
    
    int row = 3;
    int col = 3;
    
    // taking transpose of the given matrix
    for(int i = 0; i < row; i++){
        for(int j = i + 1; j < col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    int i = 0;
    int j = row - 1;
    
    // Swapping elements of first row with last row and so on
    while(i < j){
        for(int k = 0; k < row; k++){
            swap(arr[i][k], arr[j][k]);
        }
        i++;
        j--;
    }
    
    // Printing the matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Function rotates the matrix by 90deg anti-clockwise
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6,}, {7, 8, 9}};
    rotateMatrix(arr);
    
 
    return 0;
}
