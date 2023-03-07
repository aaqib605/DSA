#include <iostream>
using namespace std;

// Time Complexity --> O(row + col)
// Auxilary Space --> O(1)

void printBoundaryElements(int matrix[4][4]){
    int row = 4;
    int col = 4;
    
    if(row == 1){
        for(int i = 0; i < col; i++){
            cout << matrix[0][i] << " ";
        }
    }
    else if(col == 1){
        for(int i = 0; i < row; i++){
            cout << matrix[i][0] << " ";
        }
    }
    else {
        // printing first row elements
        for(int i = 0; i < row; i++){
            cout << matrix[0][i] << " ";
        }
        
        // printing last col elements
        for(int i = 1; i < row; i++){
            cout << matrix[i][col - 1] << " ";
        }
        
        // printing last row elements
        for(int i = col - 2; i >= 0; i--){
            cout << matrix[row - 1][i] << " ";
        }
        
        // printing first col elements
        for(int i = row - 2; i >= 1; i--){
            cout << matrix[i][0] << " ";
        }
    }
    cout << endl;
}

int main() {
    // Function prints the boundary elements of the matrix
    int matrix[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printBoundaryElements(matrix);
    return 0;
}
