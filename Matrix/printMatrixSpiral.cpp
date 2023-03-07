#include <iostream>
using namespace std;

// Time Complexity --> O(row * col)
// Auxilary Space --> O(1)

void printMatrixSpiral(int matrix[4][4]){
    int row = 4;
    int col = 4;
    
    int totalElements = row * col;
    int count = 0;
    
    int sr = 0;
    int er = row - 1;
    int sc = 0;
    int ec = col - 1;
    
    while(count < totalElements){
        
        // Printing starting row
        for(int i = sc; (count < totalElements && i <= ec); i++){
            cout << matrix[sr][i] << " ";
            count++;
        }
        sr++;
        
        // Printing ending col
        for(int i = sr; (count < totalElements && i <= er); i++){
            cout << matrix[i][ec] << " ";
            count++;
        }
        ec--;
        
        // Printing ending row
        for(int i = ec; (count < totalElements && i >= sc); i--){
            cout << matrix[er][i] << " ";
            count++;
        }
        er--;
        
        // Printing starting col
        for(int i = er; (count < totalElements && i >= sr); i--){
            cout << matrix[i][sc] << " ";
            count++;
        }
        sc++;
    }
    cout << endl;
}

int main() {
    // Function prints the matrix in spiral order
    int matrix[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printMatrixSpiral(matrix);
    return 0;
}
