#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void moveZeros(int arr[], auto n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}


int main() {
    // Function moves all the zeroes to the end
    int arr[] = {8, 5, 0, 20, 22};
    auto n = sizeof(arr) / sizeof(int);
    vector<int> ans;
    moveZeros(arr, n);
    
    for(auto elem: arr){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
