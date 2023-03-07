#include <iostream>
using namespace std;

// Time Complexity --> O(n + m)
// Auxilary Space --> O(1)

void transposeMatrix(int arr[][4]){
    
    for(int i = 0; i < 4; i++){ 
        for(int j = i + 1; j < 4; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main() {
    // Function transforms the matrix into the transpose of its own
    int arr[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
    transposeMatrix(arr);
    
    return 0;
}
