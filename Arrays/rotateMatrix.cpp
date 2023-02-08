#include <iostream>
#include <vector>
using namespace std;

// Time complexity --> O(n^2)
// Auxilary Space --> O(1)

void rotateMatrix(vector<vector<int>> &matrix, auto row, auto col){
    // Taking transpose of the matrix
    for(int i = 0; i < row; i++){
        for(int j = i + 1; j < col; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Swapping rows
    int i = 0, j = col - 1;
    while(i < j){
        for(int k = 0; k < col; k++){
            swap(matrix[i][k], matrix[j][k]);
        }
        i++;
        j--;
    }
}

int main() {
    // Function rotates the matrix(n * n) by 90 degress (anti-clockwise)
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    auto row = matrix.size();
    auto col = matrix[0].size();
    
    rotateMatrix(matrix, row, col);
    
    for(auto &row: matrix){
        for(auto &col: row){
            cout << col << " ";
        }
        cout << endl;
    }
    
    return 0;
}
